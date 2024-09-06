using System;

public class Program
{
    public static void Main(string[] args)
    {
       double P, i, A,  n;
       
        // Solicita ao usuário para inserir os valores
        P = Convert.ToDouble(Console.ReadLine());
        i = Convert.ToDouble(Console.ReadLine());
        n = Convert.ToInt32(Console.ReadLine());

        // Calcula o montante final utilizando a função CalcularJurosCompostos
        A = CalcularJurosCompostos(P, i, n);

        // Exibe o resultado
        Console.WriteLine($"Akz {A: 0.00}");
    }

    public static double CalcularJurosCompostos(double P, double i, double n)
    {
      double expressaoPrioridade = 1 + i;
      double potenciaPrioridade = Math.Pow(expressaoPrioridade, n);
      return P * potenciaPrioridade;
    }
}
