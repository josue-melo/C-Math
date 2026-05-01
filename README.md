# 🧮 C-Math

**C-Math** é uma calculadora modular desenvolvida em **C**, focada em desempenho, organização e aprendizado prático de programação.

O projeto foi criado para automatizar cálculos matemáticos do dia a dia e evolui constantemente com a adição de novas funcionalidades conforme novos conceitos são aprendidos.

---

## 🎯 Propósito

Este projeto surgiu da necessidade de automatizar cálculos repetitivos, como mediana e operações básicas.

Além disso, o **C-Math** tem como objetivos:

- Praticar lógica de programação  
- Aplicar modularização e organização de código  
- Evoluir continuamente com novas funcionalidades  
- Reduzir o uso de bibliotecas externas  
- Criar uma base sólida em C  

---

## ⚙️ Funcionalidades

### 📌 Matemática Básica

- ➕ Aritmética → [Ver código](src/math/basic/arithmetic.c)  
- ％ Porcentagem → [Ver código](src/math/basic/percentage.c)  

---

## 🧠 Conceitos Aplicados

- Modularização  
- Separação de responsabilidades:
  - `Controller` → fluxo do programa → [Ver pasta](src/controller)  
  - `UI` → entrada e saída de dados → [Ver pasta](src/ui)  
  - `Math` → lógica de cálculo → [Ver pasta](src/math)  
- Estrutura de menus com controle de fluxo (`while`)  
- Validação de entrada do usuário  
- Manipulação de entrada com `scanf`  

---

## 🗂️ Estrutura do Projeto

```text
C-Math/
│
├── src/
│   ├── controller/
│   ├── math/
│   └── ui/
│
├── include/
│   ├── controller/
│   ├── math/
│   └── ui/
│
├── bin/
│   └── C-Math.exe
│
└── README.md
``` 
---

## 🚀 Como usar

### 🔧 Compilar

Use o comando abaixo dentro da pasta do projeto:

    gcc src/*.c src/*/*.c src/*/*/*.c -Iinclude -o bin/C-Math


### ▶️ Executar

Linux/Mac:

    ./bin/C-Math

Windows:

   ```bin\C-Math.exe```

---

## 🎮 Navegação

- Use números para selecionar opções  
- `0` → voltar ou sair  
- Menus funcionam de forma encadeada  

---

## 🖥️ Preview

<img width="346" height="632" alt="C-Math" src="https://github.com/user-attachments/assets/8a068a10-e24e-4804-9088-6a8441865449" />

### Exemplo de execução

```
------- Menu Principal -------
1 - Matemática Básica
0 - Sair

> 1

----- Matemática Básica -----
1 - Aritmética
2 - Porcentagem
0 - Sair

> 1

------- Aritmética -------
1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Potência
6 - Raiz quadrada
0 - Sair

> 1

Digite o primeiro número: 5
Digite o segundo número: 3

Resultado: 8.00
```
---

## 🚧 Futuras melhorias

- 📊 Estatística (média, mediana, moda)
- 📐 Geometria (área, perímetro) 
- 🧠 Funções matemáticas avançadas 
- 🗂️ Sistema de módulos mais expansível 

---

## 🤝 Contribuição

Sinta-se à vontade para sugerir melhorias ou contribuir com o projeto.

---

## 📚 Autor

Desenvolvido por Josué 🚀  
Projeto com foco em aprendizado e evolução contínua em programação C.

---

## ⭐ Considerações finais

Este projeto representa evolução prática em:

- organização de código  
- pensamento lógico  
- construção de sistemas modulares  

Se curtir o projeto ou ele de ajudar, deixe uma ⭐ no repositório 😄
