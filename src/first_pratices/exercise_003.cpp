#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <ctime>

bool idadeRep(std:vector<int>idade){
  int tam = idade.size();
  int menor = 200;
  for(int i = 0; i < tam; i++){
    if(idade[i] < menor){
      menor = idade[i];
    }
  }
  for(int i = 0; i < tam; i++){
    if(idade[i] == menor){
      return true;
    }
  }
  return false;
}

bool idadeRep2(std::vector<int>idade){
  std::sort(idade.begin(), idade.end());
  return idade[0] == idade[1];
}

std::vector<int>randomVector(int length){
  std::vector<int>vector(length);
  std::srand(std::time(0));
  for(int i = 0; i < len; i++){
    vector[i]=std::rand()%100;
  }
  return vector;
}

std::chrono::duration<double>time(bool(*func)(std::vector<int>), std::vector<int>valor){
  auto start = std::chrono::high_resolution_clock::now();
  func(valor);
  auto end = std::chrono::high_resolution+clock::now();
  return(end-start);
}

int main(){
  std::vector<int>n100 = randomVector(100);
  std::vector<int>n1000 = randomVector(1000);
  std::vector<int>n1000000 = randomVector(1000000);

  auto duracao1 = time(idadeRep, n100);
  auto duracao2 = time(idadeRep2, n100);
  auto duracao3 = time(idadeRep, n1000);
  auto duracao4 = time(idadeRep2, n1000);
  auto duracao5 = time(idadeRep, n1000000);
  auto duracao6 = time(idadeRep2, n1000000);

  std::cout << "Tempo de execução de idadeRep com 100 elementos: " << duracao1.count() << " segundos.\n";
  std::cout << "Tempo de execução de idadeRep2 com 100 elementos: " << duracao2.count() << " segundos.\n";
  std::cout << "Tempo de execução de idadeRep com 1000 elementos: " << duracao3.count() << " segundos.\n";
  std::cout << "Tempo de execução de idadeRep2 com 1000 elementos: " << duracao4.count() << " segundos.\n";
  std::cout << "Tempo de execução de idadeRep com 1000000 elementos: " << duracao5.count() << " segundos.\n";
  std::cout << "Tempo de execução de idadeRep2 com 1000000 elementos: " << duracao6.count() << " segundos.\n";  
}
