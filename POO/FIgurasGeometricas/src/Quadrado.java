public class Quadrado implements FormasGeometricas {
    private double lado;

    public Quadrado(double lado) {
        this.lado = lado;
    }
    
    public double getLado() {
        return lado;
    }

    public void setLado(double lado) {
        this.lado = lado;
    }

    @Override
    public int QuantidadeArestas() {
        return 4;
    }

    @Override
    public double CalculaArea() {
        return lado * lado;
    }
}
