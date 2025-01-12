# aproximacao_sen_cos

## Calculadora de Aproxima o de Seno e Cosseno

Este arquivo, em linguagem C++, tem como objetivo calcular a aproxima o de seno e cosseno de um determinado valor, utilizando a Fórmula de Taylor.

### Como funciona?

A Fórmula de Taylor consiste em uma série infinita, que converge para o valor exato do seno e cosseno. A Fórmula para seno é a seguinte:

$$sen(x) = \sum_{n=0}^{\infty} \frac{(-1)^n x^{2n+1}}{(2n+1)!} = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + ...$$

E a Fórmula para cosseno   a seguinte:

$$cos(x) = \sum_{n=0}^{\infty} \frac{(-1)^n x^{2n}}{(2n)!} = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + ...$$

### Como usar?

Para usar o arquivo, basta rodar o programa e digitar o valor desejado na linha de comando. O programa ir  calcular a aproxima o do seno e cosseno e imprimi-lo na tela.

### Exemplo

Suponha que voc  deseja calcular a aproxima o do seno e cosseno de 3.14 radianos. Para isso, basta rodar o programa e digitar "3.14 5" na linha de comando. O programa ir  calcular a aproxima o do seno e cosseno com 5 termos e imprimi-lo na tela.

### Limita es

Este programa tem como limita o o fato de que a F rmula de Taylor converge apenas para valores entre -Pi e Pi. Al m disso, o c lculo da F rmula de Taylor pode ser muito lento para valores muito altos de x.


### Exemplo de saida

Sen e cos de 60 com 2 termos:

    Sen(60) = 27222444060.000027222444060
    Cos(60) = 4101452486.7143


# sin and cosine approximation

## Calculator of approximation of sin and cosine

This file, in C++ language, has as objective to calculate the approximation of sin and cosine of a given value, using the Taylor Formula.

### How it works?

The Taylor Formula is an infinite series that converges to the exact value of sin and cosine. The formula for sin is the following:

$$sin(x) = \sum_{n=0}^{\infty} \frac{(-1)^n x^{2n+1}}{(2n+1)!} = x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + ...$$

And the formula for cosine is the following:

 $$cos(x) = \sum_{n=0}^{\infty} \frac{(-1)^n x^{2n}}{(2n)!} = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + ...$$

### How to use?

To use the file, just run the program and type the desired value in the command line. The program will calculate the approximation of sin and cosine and print it on the screen.

### Example

Suppose you want to calculate the approximation of sin and cosine of 3.14 radians. To do this, just run the program and type "3.14 5" in the command line. The program will calculate the approximation of sin and cosine with 5 terms and print it on the screen.

### Limitations

This program has as limitation the fact that the Taylor Formula converges only for values between -Pi and Pi. Furthermore, the calculation of the Taylor Formula can be very slow for very high values of x.


### Example of output

Sin and cos of 60 with 2 terms:

    Sin(60) = 27222444060.000027222444060
    Cos(60) = 4101452486.7143
