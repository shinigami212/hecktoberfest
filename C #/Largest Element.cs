using System;

class Program
{
    static void Main()
    {
        int[] arr = { 5, 2, 9, 1, 5, 6 };

        if (arr.Length == 0)
        {
            Console.WriteLine("The array is empty.");
            return;
        }

        int largest = arr[0];

        foreach (int num in arr)
        {
            if (num > largest)
            {
                largest = num;
            }
        }

        Console.WriteLine("The largest element in the array is: " + largest);
    }
}
