public class Circulo implements FormasGeometricas {
    private double raio;
    private double circunferencia;

    public Circulo(double raio, double circunferencia) {
        this.raio = raio;
        this.circunferencia = circunferencia;
    }

    public double getRaio() {
        return raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    public double getCircunferencia() {
        return circunferencia;
    }

    public void setCircunferencia(double circunferencia) {
        this.circunferencia = circunferencia;
    }

    @Override
    public int QuantidadeArestas() {
        return 0;
    }

    @Override
    public double CalculaArea() {
        return Math.PI * raio * raio;
    }
}
