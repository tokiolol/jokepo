# 🪨📄✂️ Jokenpô em C

Um joguinho simples de **Jokenpô (Pedra, Papel e Tesoura)** desenvolvido em linguagem C.  
O jogador escolhe uma opção e o **BOT** responde com uma jogada aleatória.  
No final, o programa exibe o resultado: **Vitória, Derrota ou Empate**.

---

## 🚀 Como executar

1. **Clone este repositório**
   ```bash
   git clone https://github.com/seu-usuario/jokenpo-c.git
   cd jokenpo-c
   ```

2. **Compile o código**
   ```bash
   gcc jokenpo.c -o jokenpo
   ```

3. **Execute o programa**
   ```bash
   ./jokenpo
   ```

---

## 🎮 Regras do jogo

- 🪨 **Pedra (1)** quebra **Tesoura (3)**  
- 📄 **Papel (2)** cobre **Pedra (1)**  
- ✂️ **Tesoura (3)** corta **Papel (2)**  
- 🔁 Se as escolhas forem iguais → **Empate**

---

## 📷 Exemplo de uso

```txt
 ==== Jokenpô ====
 1. Pedra
 2. Papel
 3. Tesoura
 Escolha uma das opções:
2
Jogador: Papel
BOT: Tesoura
Que pena, você perdeu!
```

---

## 🛠️ Tecnologias utilizadas

- ⚙️ Linguagem **C**
- 📚 Biblioteca `stdio.h`
- 📚 Biblioteca `stdlib.h`
- ⏰ Biblioteca `time.h` (para gerar jogadas aleatórias do BOT)

---

## 💡 Melhorias futuras

- ✅ Validar a entrada do jogador (permitir apenas 1, 2 ou 3)  
- 📊 Criar um placar de vitórias, derrotas e empates  
- 🎯 Implementar modo **melhor de 3** ou **melhor de 5** partidas  
- 🎨 Deixar a interface mais estilizada no terminal  

---

## 📄 Licença

Este projeto é de uso livre.  
Você pode **usar, modificar e compartilhar** como quiser.  
