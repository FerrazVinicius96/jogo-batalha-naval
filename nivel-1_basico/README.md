# ⚓ Nível 1 — Posicionamento Básico de Navios

Este é o primeiro nível do projeto **Batalha Naval em C**, cujo objetivo é representar um tabuleiro simples com o posicionamento inicial de dois navios fixos, utilizando vetores e matriz.

---

## 🎯 Objetivo

O foco deste nível é exercitar o uso de **matriz bidimensional** para representar o tabuleiro e **vetores unidimensionais** para representar os navios.

---

## 📌 Especificações do exercício

### 🚢 Posicionamento dos Navios

- Declare e inicialize **dois vetores** (arrays unidimensionais) para representar os navios.
- Cada navio deve ocupar um número fixo de posições (exemplo: **3 posições**).
- Um navio deve ser posicionado **horizontalmente** e o outro **verticalmente** no tabuleiro.
- As posições ocupadas pelos navios devem ser representadas pelo número **3**.
- O restante da matriz deve conter **0**, indicando água.
- As posições dos navios devem:
  - Estar **completamente dentro dos limites** da matriz (10x10).
  - **Não se sobrepor**.

💡 **Dica:** O posicionamento pode ser feito copiando o valor 3 de cada posição do vetor do navio para a matriz nas coordenadas desejadas, de acordo com sua orientação (horizontal ou vertical).

---

### 🖨️ Exibição do Tabuleiro

- Exiba o tabuleiro completo no console usando **loops aninhados** e o comando `printf`.
- Utilize espaçamento ou outro caractere separador para facilitar a leitura.
- A saída deve deixar claro quais posições estão ocupadas por navios (`3`) e quais representam água (`0`).

---

## 📊 Exemplo de Saída Esperada

```txt
0 0 0 0 0 0 0 0 0 0
0 3 3 3 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 3 0 0 0 0 0 0
0 0 0 3 0 0 0 0 0 0
0 0 0 3 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0