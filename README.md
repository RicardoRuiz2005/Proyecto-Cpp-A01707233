## Elección de `std::sort` para el Ordenamiento y del Árbol Binario de Búsqueda (BST)

### 1. Elección de `std::sort` para Ordenar

El algoritmo `std::sort` de la biblioteca estándar de C++ fue seleccionado para ordenar los jugadores por su ELO debido a su eficiencia y optimización. Es un método híbrido que combina características de Quick Sort, Heap Sort y Insertion Sort, lo que lo hace adaptable a diferentes tamaños y configuraciones de datos. A continuación, se describe detalladamente su funcionamiento, análisis de complejidad y comparación con otros métodos de ordenamiento.

#### Funcionamiento de `std::sort`

1. Divide la lista de datos en particiones usando Quick Sort.
2. Optimiza las particiones pequeñas con Insertion Sort.
3. Utiliza Heap Sort como respaldo para evitar los problemas del peor caso de Quick Sort.

#### Análisis de Complejidad de `std::sort`

- **Mejor Caso**:  
  Se da cuando los datos están casi completamente ordenados. `std::sort` aprovecha esta situación reduciendo las operaciones necesarias en cada partición.  
  **Complejidad**: \( O(n \log n) \).

- **Caso Promedio**:  
  Se da con datos aleatorios. Las particiones son equilibradas en la mayoría de los casos, y el número de comparaciones se mantiene dentro de \( O(n \log n) \).  
  **Complejidad**: \( O(n \log n) \).

- **Peor Caso**:  
  Se presenta cuando las particiones son extremadamente desequilibradas, como con una lista completamente ordenada o inversamente ordenada. Sin embargo, `std::sort` mitiga este caso con su implementación híbrida.  
  **Complejidad**: \( O(n^2) \), pero rara vez ocurre debido a las optimizaciones de la biblioteca estándar.

### Ejemplo con `std::sort`

**Jugadores antes del ordenamiento:**

- Magnus Carlsen - ELO: 2852  
- Ian Nepomniachtchi - ELO: 2793  
- Ding Liren - ELO: 2811  

**Jugadores después de aplicar `std::sort`:**

- Magnus Carlsen - ELO: 2852  
- Ding Liren - ELO: 2811  
- Ian Nepomniachtchi - ELO: 2793  

---

### 2. Comparación con Merge Sort

Merge Sort es otro algoritmo eficiente con una complejidad de \( O(n \log n) \) en todos los casos. Es estable, lo que significa que mantiene el orden relativo de los elementos con valores iguales. Sin embargo, tiene un mayor consumo de memoria porque requiere espacio adicional para almacenar las sublistas durante la fusión.

#### Comparación de Complejidad

| Método       | Promedio      | Mejor Caso   | Peor Caso    | Memoria Adicional |
|--------------|---------------|--------------|--------------|-------------------|
| `std::sort`  | \( O(n \log n) \) | \( O(n \log n) \) | \( O(n^2) \) (mitigado) | Ninguna           |
| Merge Sort   | \( O(n \log n) \) | \( O(n \log n) \) | \( O(n \log n) \) | \( O(n) \)        |

En el contexto del proyecto, `std::sort` es ideal debido a su rendimiento general y menor consumo de memoria.

---

### 3. Elección del Árbol Binario de Búsqueda (BST)

El BST fue elegido para almacenar y buscar jugadores por su ELO debido a su simplicidad y eficiencia. Es una estructura jerárquica que permite insertar, buscar y recorrer elementos en orden en promedio \( O(\log n) \), siempre que el árbol esté balanceado.

#### Funcionamiento del BST

1. Los valores menores que la raíz están en el subárbol izquierdo.  
2. Los valores mayores están en el subárbol derecho.  

#### Análisis de Complejidad del BST

- **Mejor Caso**:  
  Se da con un árbol balanceado. Las inserciones y búsquedas recorren niveles proporcionales a \( \log n \).  
  **Complejidad**: \( O(\log n) \).

- **Caso Promedio**:  
  En árboles semibalanceados, las operaciones aún tienden a \( O(\log n) \).  
  **Complejidad**: \( O(\log n) \).

- **Peor Caso**:  
  Ocurre en un árbol completamente desbalanceado (similar a una lista enlazada).  
  **Complejidad**: \( O(n) \).

#### Ejemplo de Árbol Binario de Búsqueda

**Jugadores:**

- Magnus Carlsen - ELO: 2852  
- Ian Nepomniachtchi - ELO: 2793  
- Ding Liren - ELO: 2811  

**Estructura del Árbol (por ELO):**
    2852
   /    \
2793    2811


#### Comparación con AVL Tree

Un AVL Tree es un BST balanceado automáticamente. Mantiene su altura cercana a \( \log n \) mediante rotaciones tras cada inserción o eliminación. Esto mejora el peor caso, pero añade complejidad a las operaciones.

| Método   | Promedio       | Peor Caso     | Ventaja                          | Desventaja                      |
|----------|----------------|---------------|----------------------------------|---------------------------------|
| BST      | \( O(\log n) \) | \( O(n) \)    | Simple y eficiente para datos moderados | Desbalance en casos extremos   |
| AVL Tree | \( O(\log n) \) | \( O(\log n) \) | Siempre balanceado, mejor para grandes datos | Rotaciones frecuentes          |

---

### Conclusión

- `std::sort` fue elegido por su eficiencia promedio, adaptabilidad y menor consumo de memoria en comparación con Merge Sort.  
- BST es ideal para organizar jugadores en este proyecto debido a su simplicidad y eficiencia en búsqueda y organización.
