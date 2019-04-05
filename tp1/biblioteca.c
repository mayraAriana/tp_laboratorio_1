/** \brief Recibe 2 numeros y realiza la suma de ambos
 *
 * \param num_1 primer operando
 * \param num_2 segundo operando
 * \return Resultado de la suma
 *
 */

float suma(float num_1, float num_2)
{
    float suma;
    suma = num_1 + num_2;

    return suma;
}


/** \brief Recibe 2 numeros y realiza una resta entre ambos
 *
 * \param num_1 primer operando
 * \param num_2 segundo operando
 * \return Resultado de la resta
 *
 */

float resta(float num_1, float num_2)
{
    float resta;
    resta = num_1 - num_2;

    return resta;
}


/** \brief Recibe 2 numeros y realiza una multiplicacion entre ambos
 *
 * \param num_1 primer operando
 * \param num_2 segundo operando
 * \return Resultado de la multiplicacion
 *
 */

float multiplicacion(float num_1, float num_2)
{
    float multiplicacion;
    multiplicacion = num_1 * num_2;

    return multiplicacion;
}


/** \brief Recibe 2 numeros y realiza una division
 *
 * \param num_1 dividendo
 * \param num_2 divisor
 * \return Cociente de la division
 *
 */

float division(float num_1, float num_2)
{
    float division;
    division = num_1 / num_2;

    return division;
}


/** \brief Recibe un numero y saca su factorial
 *
 * \param num_1 numero recibido
 * \param
 * \return Factorial
 *
 */

int factorial(int num_1)
{
    int res;

    if(num_1==0)
    {
        res = 1;
    }
    else
    {
        res = num_1 * factorial(num_1-1);
    }

    return res;
}
