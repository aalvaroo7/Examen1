# Examen1
https://github.com/aalvaroo7/Examen1.git

# Parte 1(preguntas tipo test))

## pregunta 1)C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?#

respuesta: d. Todas las anteriores

## pregunta 2)Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

respuesta: b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

## pregunta 3)En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

respuesta: b. Variables que almacenan la dirección de otra variable

Parte 3(preguntas a desarrollar)

# 8.-La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:

## 8a)¿Cómo la programación orientada a objetos difiere de la programación procedimental?

En la programación procedimental, el código se organiza en funciones o procedimientos, y el énfasis está en las acciones que se deben realizar. Es como seguir una receta de cocina paso a paso. Por otro lado, la programación orientada a objetos se centra en la creación de objetos que contienen tanto datos como funciones. Estos objetos interactúan entre sí, y el énfasis está en los objetos y sus interacciones más que en las acciones individuales.

En POO, puedes encapsular datos y funciones relacionadas en clases, lo que facilita la reutilización del código y la organización del programa de manera más modular. Además, se introducen conceptos como herencia, polimorfismo y encapsulamiento, que permiten una mayor flexibilidad y extensibilidad del código.

En resumen, la programación procedimental se enfoca en las acciones y procedimientos, mientras que la programación orientada a objetos se centra en la creación y manipulación de objetos que interactúan entre sí.

## 8b)¿Cómo C++ brinda soporte para ambos paradigmas?

Programación Orientada a Objetos (POO): En C++, puedes definir clases que encapsulan datos y funciones relacionadas. Puedes usar herencia para crear nuevas clases basadas en las existentes, permitiendo la reutilización del código. También tienes polimorfismo, que te permite tratar objetos de diferentes clases de manera uniforme.

Programación Procedimental: Aunque puedes usar POO en C++, también puedes escribir código más procedural si lo prefieres. Puedes crear funciones independientes y organizar tu código en un estilo más procedimental.

La flexibilidad de C++ permite a los programadores elegir el enfoque que mejor se adapte a sus necesidades. Puedes mezclar ambos estilos según sea necesario, lo que hace que C++ sea muy poderoso y adaptable a una variedad de situaciones.

# 9.-Las excepciones en C++ tienen un comportamiento específico. Describe:

## 9a)¿Qué es la propagación de una excepción?

La propagación de excepciones es el proceso mediante el cual una excepción lanzada en una parte del código se transmite o propaga hacia arriba a través de la pila de llamadas hasta que se maneja en algún lugar adecuado.

Cuando ocurre una excepción en un bloque de código, el flujo normal del programa se interrumpe, y se busca un bloque de código (como un bloque catch en C++ o un bloque except en Python) que pueda manejar esa excepción. Si no se encuentra uno en el mismo bloque, la excepción se propaga hacia arriba en la cadena de llamadas a funciones hasta que se encuentra un bloque de manejo o hasta que llega al nivel más alto del programa, lo que podría resultar en la terminación del programa y la impresión de un mensaje de error.

La propagación de excepciones permite separar la lógica de manejo de errores del código donde se produce el error, lo que puede hacer que el código sea más modular y fácil de mantener. Además, facilita la identificación y gestión de errores en niveles superiores del programa, donde se tiene una visión más amplia del contexto y se pueden tomar decisiones más informadas sobre cómo manejar la excepción.

## 9b)¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

Si una excepción es lanzada pero no es capturada por ningún bloque catch, la excepción seguirá propagándose hacia arriba en la pila de llamadas hasta llegar al nivel más alto del programa. En este punto, dependiendo del lenguaje de programación y del entorno de ejecución, puede ocurrir una de las siguientes situaciones:

Terminación del Programa: En muchos casos, si una excepción no se maneja en ningún lugar, el programa terminará su ejecución. Esto podría ir acompañado de un mensaje de error que indica la naturaleza de la excepción.

Impresión de un Mensaje de Error: Al alcanzar el nivel superior, algunas plataformas o entornos pueden imprimir un mensaje de error predeterminado que describe la excepción no manejada.

Dependiendo del Lenguaje: En algunos lenguajes, como C++, si una excepción no es capturada, puede resultar en un término anormal del programa (por ejemplo, std::terminate() en C++).

Es importante manejar las excepciones de manera adecuada para evitar términos inesperados del programa y para proporcionar información útil sobre los errores que pueden ocurrir durante la ejecución. Esto generalmente implica agregar bloques catch adecuados para manejar las excepciones en lugares relevantes del código.

# 10.-La gestión de recursos es un concepto crucial en la programación. Explica:

## 10a)¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?

En C++, "adquisición de recursos" se refiere al proceso de reservar y asignar recursos, como memoria, durante la ejecución de un programa. En términos más simples, es obtener los recursos necesarios para que un programa funcione correctamente.

Por ejemplo, en la gestión dinámica de memoria, la adquisición de recursos podría implicar el uso de operadores como new para asignar memoria en el heap. Después de haber utilizado estos recursos, es importante liberarlos adecuadamente mediante el uso de delete para evitar fugas de memoria.

En resumen, la adquisición de recursos en C++ se refiere a obtener y gestionar los recursos necesarios para que un programa se ejecute correctamente, y también implica liberar esos recursos cuando ya no son necesarios.

## 10b)¿Por qué es importante y cómo se relaciona con la gestión de excepciones?

La gestión adecuada de recursos en C++ es esencial para prevenir posibles problemas, como fugas de memoria o la falta de liberación de otros recursos, lo que podría afectar el rendimiento y la estabilidad del programa. La relación con la gestión de excepciones radica en la necesidad de manejar situaciones excepcionales de manera elegante y segura.

Cuando ocurre una excepción, es crucial liberar cualquier recurso adquirido previamente para evitar fugas de memoria o dejar el programa en un estado inconsistente. Por ejemplo, si has asignado memoria dinámicamente con new y ocurre una excepción antes de que puedas liberar esa memoria con delete, podrías perder la referencia a esa memoria, lo que resultaría en una fuga de memoria.

Para abordar esto, se puede utilizar el bloque try-catch. En el bloque try, puedes adquirir recursos, y en el bloque catch, puedes manejar las excepciones y liberar cualquier recurso adquirido. También puedes utilizar técnicas como RAII (Resource Acquisition Is Initialization) mediante el uso de objetos que automáticamente adquieran y liberen recursos en sus constructores y destructores, respectivamente.

En resumen, la gestión de recursos y la gestión de excepciones están relacionadas porque la primera es crucial para evitar problemas como fugas de memoria, y la segunda proporciona un mecanismo para manejar situaciones excepcionales de manera que los recursos se liberen adecuadamente.




