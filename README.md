# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

Identificar valores mayores al realizar medidas como de algun dispositivo

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. valor 1
2. valor 2
3. valor 3

**Salida:**
1. que número es mayor de los 3 anteriores

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**

Muestro el valor del mayor, porque eso responde qué medida es la más grande. 

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
Uso leerDecimal, porque acepta enteros y decimales, que aparecen en los casos de prueba. 

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Se deben ingresar tres valores 
- Se permiten valores positivos, negativos y decimales.

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
puedo poner una restricción para que marque error con eso

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Si dos números son iguales, va a maracar error y que ingrese otro valor

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
leerDecimal detecta texto, entradas y números que no puede convertir, y vuelve a pedir el dato. 

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Se va a mostrar el número mayor de los 3 ingresados 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 8 | 5 | 3 | 8|
| 2 (el mayor en segunda posición) | 3 | 8 | 5 | 8  |
| 3 (el mayor en tercera posición) | 3 | 5 | 8 | 8  |
| 4 (con un empate) | 7 | 7 | 3 | 7  |
| 5 (con negativos) | -4| -1 | -9 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí
**¿Tuve que corregirla? ¿Qué cambié?** prestar más atención que queria poner en la receta y cambiar lo que no me ayudara 
**¿Cuántas versiones de mi receta escribí hasta la final?** 3 versiones
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
revisar trabajos anteriores

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
Bienvenido a mi programa
Escribe el primer número: 7
Escribe el segundo número: 7
Escribe el tercer número: 3
Hay empate en el valor mayor. No se acepta.
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | std::cout << "Bienvenido a mi programa\n" |
| 2. Leer el primer número | numero1 = leerDecimal("Escribe el primer número: "); y el while que lo vuelve a pedir si es negativo |
| 3. Leer el segundo número | numero2 = leerDecimal("Escribe el segundo número: "); y su while  |
| 4. Leer el tercer número | numero3 = leerDecimal("Escribe el tercer número: "); y su while  |
| 5–7. Encontrar cuál es el único mayor | if / else if / else compara los números  |
| 8. Mostrar el resultado o el empate | switch (opcion) elige un case; cada break termina ese caso |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
Sí, el paso de mostrar el resultado, porque primero tuve que asignar una opción entera según cuál número era mayor. 

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
La expresion marca como valida, aunque podria expresarse de otra manera para que el codigo se lleve a cabo de la mejor manera 

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
Con los dos casos se crea un empate. Con >= acepta el empate y muestra 7 para y en el caso 2, muestra el 5.  El > detecta al numero mayor aunque algunos terminos se repitan

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 |si |
| Mayor en medio | 4, 9, 2 | 9 | 9 | si |
| Mayor al final | 2, 4, 9 | 9 | 9 | si |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | No se puede ejecutar porque hay un empate |No da resultado porque se repiten terminos| si |
| Empate arriba (1.º y 3.º) | 7, 3, 7 |No se puede ejecutar porque hay un empate | No da resultado| si
| Empate abajo | 8, 3, 3 | 8 | 8 | si|
| Los tres iguales | 5, 5, 5 | No se puede ejecutar por que todos son iguales | No da resultado | si |
| Rechaza negativos | -4 (luego 4), 1, 2 | vuelve a pedir el primer numero por que es negativo| 4| si |
| Con cero | 0, 2, 1 | 2 | 2 | si|
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | si|
| Texto | `abc` (luego 3), 1, 2 | pide que escribas un numero| 3| si|
| Caso propio 1 | 0, 1.5, 1 | 1.5 |1.5 | si|
| Caso propio 2 | 8, 2, 1 | 8| 8| si |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 |se me dificulto la parte de que analizara que numeros era mayores, y que si dos eran iguales mandar un empate y que no los aceptara | busque opciones de como ejecutar el codigo|si

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ninguna |   |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
Como ejecutar completamente la receta y el codigo, buscando en trabajos anteriores y guiarme de las indicaciones, al igual que investigando

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Prestar más atención en la receta ya que es la base del main, y se me complico mas 

**¿Qué fue lo más difícil y cómo lo resolví?**
Ejecutar de receta a main, y la parte de agregar empates para que no aceptara numeros iguales

**¿Qué pregunta me quedó sin responder?**
ninguna

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
La receta 4, ya que me guie del trabajo o al igual la practica 3, esta practica se me complico más 

**¿Pensé en los empates antes de programar o los descubrí al probar?**
No lo habia pensado, hasta que lei el readme, y al momento de programar alli se me dificulto un poco

## 14. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené las secciones 1 a 13 (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla, incluidos los empates
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom