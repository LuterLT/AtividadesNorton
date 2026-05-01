public class App {
    public static void main(String[] args) {
        Circulo circulo = new Circulo(5.0, 2 * Math.PI * 5.0);
        Quadrado quadrado = new Quadrado(4.0);
        Retangulo retangulo = new Retangulo(6.0, 3.0);
        Triangulo triangulo = new Triangulo(5.0, 2.5);

        System.out.println("Circulo:");
        System.out.println("  Quantidade de arestas: " + circulo.QuantidadeArestas());
        System.out.println("  Area: " + String.format("%.2f", circulo.CalculaArea()));

        System.out.println("\nQuadrado:");
        System.out.println("  Quantidade de arestas: " + quadrado.QuantidadeArestas());
        System.out.println("  Area: " + quadrado.CalculaArea());

        System.out.println("\nRetangulo:");
        System.out.println("  Quantidade de arestas: " + retangulo.QuantidadeArestas());
        System.out.println("  Area: " + retangulo.CalculaArea());

        System.out.println("\nTriangulo:");
        System.out.println("  Quantidade de arestas: " + triangulo.QuantidadeArestas());
        System.out.println("  Area: " + triangulo.CalculaArea());
    }
}
