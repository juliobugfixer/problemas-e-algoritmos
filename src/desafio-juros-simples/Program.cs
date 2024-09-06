using System;

public class Program
{
    public static void Main(string[] args)
    {
      double P, i, A;
      int n;

        // Solicita ao usuário para inserir os valores
        P = Convert.ToDouble(Console.ReadLine()); // Lê o valor principal P

        i = Convert.ToDouble(Console.ReadLine()); // Lê a taxa de juros i

        n = Convert.ToInt32(Console.ReadLine()); // Lê o número de períodos n

        // Calcula o montante final utilizando a função CalcularJurosSimples
        A = CalcularJurosSimples(P, i, n);

        // Exibe o resultado
        Console.WriteLine($"Akz {A: 0.00}"); // Mostra o montante final calculado
    }

    public static double CalcularJurosSimples(double P, double i, int n)
    {
        return P + (P * i * n);
    }
}
