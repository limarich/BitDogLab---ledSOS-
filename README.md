# 🚨 Projeto – Envio de S.O.S em Código Morse 🚨

Este projeto implementa um sistema embarcado que transmite a mensagem **"SOS"** em **Código Morse** utilizando um **LED** controlado pela **Placa BitDogLab (Raspberry Pi Pico)**. O código foi desenvolvido em **C** e pode ser simulado no **Wokwi** antes da execução no hardware físico.

---

## 📌 **Descrição do Projeto**
O **Código Morse** é um sistema de codificação utilizado para transmitir mensagens por meio de **pulsos luminosos ou sonoros**. Neste projeto, a transmissão da mensagem "SOS" ocorre por meio do LED, seguindo o padrão:

- **Ponto (.)** → LED aceso por **0,2 segundos**  
- **Traço (-)** → LED aceso por **0,8 segundos**  
- **Intervalo entre pontos e traços:** **0,125 segundos**  
- **Intervalo entre letras:** **0,25 segundos**  
- **Intervalo entre palavras:** **3 segundos**  

O código é executado de forma **ininterrupta**, garantindo a transmissão contínua da mensagem **SOS**.

---

## 🛠 **Materiais e Ferramentas Utilizadas**

### **🔌 Hardware**
- **Placa de Desenvolvimento BitDogLab (Raspberry Pi Pico)**
- **LED Vermelho**
- **Resistor de 360Ω**
- **Cabo USB para conexão com o computador**

### **💻 Software e Ferramentas**
- **Visual Studio Code** (Ambiente de desenvolvimento)
- **Wokwi** (Simulação do circuito)
- **CMake & Make** (Compilação do firmware)
- **SDK Raspberry Pi Pico** (Bibliotecas para desenvolvimento embarcado)
- **GitHub** (Versionamento de código)

---

## 🚀 **Configuração do Ambiente**
### **1️⃣ Instalação do Visual Studio Code**
Baixe e instale o **VS Code** no site oficial:  
🔗 [https://code.visualstudio.com/](https://code.visualstudio.com/)  

### **2️⃣ Instalação das Extensões Necessárias**
No **VS Code**, instale as seguintes extensões:  
- **C/C++** → [Extensão](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)  
- **Raspberry Pi Pico SDK** → [Extensão](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico)  
- **Wokwi for VS Code** → [Extensão](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode)  

### **3️⃣ Instalação do SDK do Raspberry Pi Pico**
- Clone o SDK:
  ```sh
  git clone https://github.com/raspberrypi/pico-sdk.git
  ```
- Configure o SDK seguindo a documentação oficial:  
  🔗 [https://github.com/raspberrypi/pico-sdk](https://github.com/raspberrypi/pico-sdk)  

---

## 🏗 **Compilação e Envio para a Placa**
### **1️⃣ Compilar o Código**
Navegue até a pasta do projeto e execute:
```sh
mkdir build
cd build
cmake ..
make
```
Isso gerará um arquivo **.uf2** (firmware) para ser enviado à placa.

### **2️⃣ Modo Bootloader e Envio do Firmware**
1. **Desconecte** a placa do computador.  
2. **Pressione e segure o botão BOOTSEL** da placa.  
3. **Conecte a placa ao computador via USB** e aguarde ela aparecer como um **dispositivo de armazenamento USB**.  
4. **Arraste e solte** o arquivo **ledSOS.uf2** na unidade correspondente à placa.  
5. A placa **reiniciará automaticamente** e começará a piscar o LED em Código Morse!  

---

## 🎮 **Testando no Simulador Wokwi**
Caso queira testar antes de enviar para a placa, utilize a simulação no **Wokwi**:  
🔗 [Simulação Online no Wokwi](https://wokwi.com/projects/419812436547107841)  

### **Arquivos de Configuração do Wokwi**
- **diagram.json** → Define a conexão entre os componentes (Placa, LED e Resistor).  
- **wokwi.toml** → Configura a simulação e aponta para o firmware `.uf2`.  

---

## 🛠 **Possíveis Problemas e Soluções**
| Problema | Solução |
|----------|---------|
| O LED não pisca | Verifique se a GPIO correta está sendo usada (`GPIO 11`). |
| A placa não entra em modo bootloader | Pressione **BOOTSEL** antes de conectar. |

---

## 📜 **Licença**
Este projeto está licenciado sob a **MIT License**. Sinta-se à vontade para usá-lo e modificá-lo!  

---

## ✉ **Contato**
- **GitHub**: [https://github.com/limarich/BitDogLab---ledSOS-](https://github.com/limarich/BitDogLab---ledSOS-)  
- **E-mail**: [SeuEmail@exemplo.com](mailto:richard.esclima@gmail.com)  

Se este projeto foi útil para você, ⭐ considere dar um star no repositório! 🚀

