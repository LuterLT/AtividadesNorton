package com.aulanorton1;


public class App {

    public static void main(String[] args) throws IllegalAccessException {
        Paciente paciente1 = new Paciente();
        paciente1.nome = "João Silva";
        paciente1.cpf = "123.456.789-00";
        paciente1.telefone = "(11) 99999-9999";
        paciente1.genero = "Masculino";
        paciente1.idade = 35;
        Medico medico1 = new Medico();
        medico1.nome = "Dra. Maria Oliveira";
        medico1.crm = "12345-SP";
        medico1.telefone = "(11) 98888-8888";
        medico1.especialidade = "Cardiologia";
        medico1.senha = "senha123";
        Recepcionista recepcionista1 = new Recepcionista();
        recepcionista1.nome = "Ana Souza";
        recepcionista1.cpf = "987.654.321-00";
        recepcionista1.telefone = "(11) 97777-7777";
        recepcionista1.senha = "recep123";
        Agenda agenda1 = new Agenda();
        agenda1.data = "22/02/2026";
        agenda1.hora = "14:30";
        agenda1.medico = medico1;
        agenda1.paciente = paciente1;
        Consulta consulta1 = new Consulta();
        consulta1.data = "22/02/2026";
        consulta1.hora = "14:30";
        consulta1.medico = medico1;
        consulta1.paciente = paciente1;
        consulta1.motivo = "Dor no peito";
        consulta1.historico = "Paciente com hipertensão";
        Receita receita1 = new Receita();
        receita1.consulta = consulta1;
        receita1.data = "22/02/2026";
        receita1.descritivo = "Tomar Losartana 50mg 1x ao dia";
        Exame exame1 = new Exame();
        exame1.consulta = consulta1;
        exame1.data = "23/02/2026";
        exame1.descritivo = "Eletrocardiograma";

        paciente1.mostrar();
        medico1.mostrar();
        recepcionista1.mostrar();
        consulta1.mostrar();
        exame1.mostrar();
        receita1.mostrar();
        agenda1.mostrar();
    }
}
