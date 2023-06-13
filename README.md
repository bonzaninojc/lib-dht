
# Lib de Medição de Temperatura.

A Lib de Medição de Temperatura é uma biblioteca que permite medir a temperatura utilizando sensores de temperatura compatíveis. Ela fornece uma interface fácil de usar para obter leituras precisas da temperatura ambiente.



Informações e recursos:
- Medição precisa da temperatura ambiente.
- Suporte somente o DHT 11 OU DHT 22.
- Fácil integração com projetos existentes.
- Suporte a unidade de medida Celsius.
- Configuração flexível para atender às necessidades específicas do usuário.



## Como instalar

![App Screenshot](https://www.robocore.net/upload/tutoriais/32_img_2_H.png)


## Como utilizar

```
#include "lib_dht.h"

// Define o pino de conexão do sensor DHT e o tipo de sensor
int pin = 4;  // Exemplo: pino 4
DHTType type = DHT_TYPE_11;  // Exemplo: DHT11

// Cria uma instância da biblioteca LibDht
LibDht dht(pin, type);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Lê a temperatura e a umidade
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Exibe os resultados no monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("°C");
  
  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000);
}
