## Elección de `std::sort` para el Ordenamiento y del Árbol Binario de Búsqueda (BST)

### 1. Elección de `std::sort` para Ordenar

El algoritmo `std::sort` de la biblioteca estándar de C++ fue seleccionado para ordenar los jugadores por su ELO debido a su eficiencia y optimización. Es un método híbrido que combina características de Quick Sort, Heap Sort y Insertion Sort, lo que lo hace adaptable a diferentes tamaños y configuraciones de datos.

#### Funcionamiento de `std::sort`

1. Divide la lista de datos en particiones usando Quick Sort.
2. Optimiza las particiones pequeñas con Insertion Sort.
3. Utiliza Heap Sort como respaldo para evitar los problemas del peor caso de Quick Sort.

#### Análisis de Complejidad de `std::sort`

- **Mejor Caso**: \( O(n \log n) \).  
- **Caso Promedio**: \( O(n \log n) \).  
- **Peor Caso**: \( O(n^2) \) (rara vez ocurre debido a las optimizaciones).  

#### Implementación en el Proyecto

El código usa `std::sort` para ordenar jugadores por su ELO. [Inserte código 1]

**Jugadores antes del ordenamiento:**

- Magnus Carlsen - ELO: 2852  
- Ian Nepomniachtchi - ELO: 2793  
- Ding Liren - ELO: 2811  

**Jugadores después del ordenamiento:**

- Magnus Carlsen - ELO: 2852  
- Ding Liren - ELO: 2811  
- Ian Nepomniachtchi - ELO: 2793  

---

### 2. Comparación con Merge Sort

Merge Sort es otro algoritmo eficiente con una complejidad de \( O(n \log n) \) en todos los casos, pero requiere más memoria adicional.

**Comparación de Complejidad:**

| Método       | Promedio      | Peor Caso    | Memoria Adicional |
|--------------|---------------|--------------|-------------------|
| `std::sort`  | \( O(n \log n) \) | \( O(n^2) \) (mitigado) | Ninguna           |
| Merge Sort   | \( O(n \log n) \) | \( O(n \log n) \)        | \( O(n) \)        |

En caso de implementar Merge Sort, el código sería el siguiente: [Inserte código 2]

---

### 3. Elección del Árbol Binario de Búsqueda (BST)

El BST fue elegido para almacenar y buscar jugadores por su ELO debido a su simplicidad y eficiencia. Permite inserciones y búsquedas en promedio \( O(\log n) \).

#### Funcionamiento del BST

1. Valores menores que la raíz están en el subárbol izquierdo.  
2. Valores mayores están en el subárbol derecho.  

#### Análisis de Complejidad del BST

- **Mejor Caso**: \( O(\log n) \).  
- **Peor Caso**: \( O(n) \) (cuando el árbol está desbalanceado).  

#### Implementación en el Proyecto

Para insertar jugadores en el BST, utilizamos este código: [Inserte código 3]  
Para buscar un jugador por su ELO, el código es el siguiente: [Inserte código 4]

**Estructura del Árbol (Ejemplo por ELO):**

----2852
---/---\
2793---2811


---

### Conclusión

- `std::sort` fue elegido por su eficiencia y menor consumo de memoria en comparación con Merge Sort.  
- BST es ideal para organizar jugadores en este proyecto debido a su simplicidad y eficiencia en búsquedas.
