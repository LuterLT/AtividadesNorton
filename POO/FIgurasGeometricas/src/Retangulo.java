public class Retangulo implements FormasGeometricas {
    private double base;
    private double altura;
    public double getBase() {
        return base;
    }
    public void setBase(double base) {
        this.base = base;
    }
    public double getAltura() {
        return altura;
    }
    public void setAltura(double altura) {
        this.altura = altura;
    }
    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    public int QuantidadeArestas() {
        return 4;
    }

    @Override
    public double CalculaArea() {
        return base * altura;
    }
}
