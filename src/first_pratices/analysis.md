### Tabela Assintótica da Função de Busca Binária

```c++
int buscaBinaria(const std::vector<int>& A, int n, int x) {
    int esq = 0;
    int dir = n-1;

    while(esq < dir){
        int m = (esq + dir)/2;

        if(x > A[m]){
            esq = m + 1;
        } else {
            dir = m;
        }
    }

    /*
    +----==[ Complex. Assintótica ]==----+
    |          Pior caso: O(logn).       |
    |         Caso médio: θ(logn).       |
    |          Melhor caso: Ω(1).        |
    +------------------------------------+
    */

    if(A[esq] == x){
        return esq;
    }

    return -1;
}
```

| Crescimento     | **Big O** | **Ω (Omega)** | **Θ (Theta)** |
|-----------------|-----------|---------------|---------------|
| \( n! \)        |           |               |               |
| \( 2^n \)       |           |               |               |
| \( n^3 \)       |           |               |               |
| \( n^2 \)       |           |               |               |
| \( n \log n \)  |           |               |               |
| \( n \)         |           |               |               |
| \( \log n \)    |     X     |               |       X       |
| \( 1 \)         |           |       X       |               |

---

### Tabela Assintótica da Função de Busca Lista 2

```c++
int buscaLista2(std::vector<int>A, int x){
    int tam = A.size();
    int i = 0;
    while(i < tam && A[i]==x){
    /*
    +----==[ Complex. Assintótica ]==----+
    |           Pior caso: O(n).         |
    |          Caso médio: θ(n).         |
    |         Melhor caso: Ω(1).         |
    +------------------------------------+
    */
        i = i+1;
    }
    if(i < tam && A[i]==x)
        return i; // O(1)
    return -1;
}
```

| Crescimento     | **Big O** | **Ω (Omega)** | **Θ (Theta)** |
|-----------------|-----------|---------------|---------------|
| \( n! \)        |           |               |               |
| \( 2^n \)       |           |               |               |
| \( n^3 \)       |           |               |               |
| \( n^2 \)       |           |               |               |
| \( n \log n \)  |           |               |               |
| \( n \)         |     X     |               |       X       |
| \( \log n \)    |           |               |               |
| \( 1 \)         |           |       X       |               |

---

### Tabela Assintótica da Função de Busca Lista 3

```c++
int buscaLista3(std::vector<int>A, int x){
    int tam = A.size();
    sort(A.begin(), A.end());

    /*
    +----==[ Complex. Assintótica ]==----+
    |        Pior caso: O(n logn).       |
    |        Caso médio: θ(n logn).      |
    |        Melhor caso: Ω(n logn).     |
    +------------------------------------+
    */

    int i = 0;
    while(i < tam && A[i]==x){
        i = i+1;
    }

    /*
    +----==[ Complex. Assintótica ]==----+
    |           Pior caso: O(n).         |
    |          Caso médio: θ(n).         |
    |         Melhor caso: Ω(1).         |
    +------------------------------------+
    */

    if(i < tam && A[i]==x)
        return i; // O(1)
    return -1;
}
```

| Crescimento     | **Big O** | **Ω (Omega)** | **Θ (Theta)** |
|-----------------|-----------|---------------|---------------|
| \( n! \)        |           |               |               |
| \( 2^n \)       |           |               |               |
| \( n^3 \)       |           |               |               |
| \( n^2 \)       |           |               |               |
| \( n \log n \)  |     X     |               |       X       |
| \( n \)         |           |               |               |
| \( \log n \)    |           |               |               |
| \( 1 \)         |           |       X       |               |

---

### Tabela Assintótica da Função de IdadeRep

```c++
bool idadeRep(std::vector<int>idade){
  int tam = idade.size();
  int menor = 200;
  for(int i = 0; i < tam; i++){
  	/*
  	 * O tempo aqui dependerá exclusivamente do tamanho do vetor.
  	 * Em pior ou médio caso, todo o vetor será percorrido.
  	 * O melhor caso será quando o tamanho do vetor for igual a 1.
  	*/
    if(idade[i] < menor){
      menor = idade[i];
    }
  }
  for(int i = 0; i < tam; i++){ 
  /* Pior caso: O(n). O valor é o último da posição.
   * Caso médio: θ(n). Boa parte do vetor foi percorrido, sem ser o úlitmo.
   * Melhor caso: Ω(1). O valor é o primeiro elemento do vetor.
  */
    if(idade[i] == menor){
      return true;
    }
  }
  return false;
}
```

| Crescimento     | **Big O** | **Ω (Omega)** | **Θ (Theta)** |
|-----------------|-----------|---------------|---------------|
| \( n! \)        |           |               |               |
| \( 2^n \)       |           |               |               |
| \( n^3 \)       |           |               |               |
| \( n^2 \)       |           |               |               |
| \( n \log n \)  |           |               |               |
| \( n \)         |     X     |               |       X       |
| \( \log n \)    |           |               |               |
| \( 1 \)         |           |       X       |               |

---

### Tabela Assintótica da Função de IdadeRep2

```c++
bool idadeRep2(std::vector<int>idade){
  std::sort(idade.begin(), idade.end());
   /* Pior caso: O(n logn). Tempo estimado da função sort em ordenar um vetor.
   * Caso médio: θ(n logn). Tempo estimado da função sort em ordenar um vetor.
   * Melhor caso: Ω(n logn).
   */
  return idade[0] == idade[1];
}
```

| Crescimento     | **Big O** | **Ω (Omega)** | **Θ (Theta)** |
|-----------------|-----------|---------------|---------------|
| \( n! \)        |           |               |               |
| \( 2^n \)       |           |               |               |
| \( n^3 \)       |           |               |               |
| \( n^2 \)       |           |               |               |
| \( n \log n \)  |     X     |               |       X       |
| \( n \)         |           |               |               |
| \( \log n \)    |           |               |               |
| \( 1 \)         |           |       X       |               |
