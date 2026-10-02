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
puedo poner una restricción para que marqeu error con eso

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Muestra el valor mayor. Si dos números empatan en el mayor, muestra ese valor una sola vez; si los tres son iguales, muestra ese mismo valor.

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
leerDecimal detecta texto, entradas y números que no puede convertir, y vuelve a pedir el dato. 

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
El valor que voy a mostrar es uno de los tres números ingresados y es mayor o igual que los otros dos.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 8 | 5 | 3 | 8 |
| 2 (el mayor en segunda posición) | 3 | 8 | 5 | 8 |
| 3 (el mayor en tercera posición) | 3 | 5 | 8 | 8 |
| 4 (con un empate) | 7 | 7 | 3 | 7 |
| 5 (con negativos) | -4 | -1 | -9 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí/No
**¿Tuve que corregirla? ¿Qué cambié?** 
**¿Cuántas versiones de mi receta escribí hasta la final?** _____
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
_____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | _____ |
| _____ | _____ |
| _____ | _____ |
| _____ | _____ |
| _____ | _____ |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
_____

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
_____

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
_____

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
_____

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | _____ | _____ |
| Mayor en medio | 4, 9, 2 | 9 | _____ | _____ |
| Mayor al final | 2, 4, 9 | 9 | _____ | _____ |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | _____ | _____ |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | _____ | _____ |
| Empate abajo | 8, 3, 3 | 8 | _____ | _____ |
| Los tres iguales | 5, 5, 5 | 5 | _____ | _____ |
| Todos negativos | -4, -1, -9 | -1 | _____ | _____ |
| Con cero | -2, 0, -5 | 0 | _____ | _____ |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | _____ | _____ |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
_____

**¿Pensé en los empates antes de programar o los descubrí al probar?**
_____

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