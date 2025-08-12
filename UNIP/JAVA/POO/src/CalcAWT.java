import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class CalcAWT extends JFrame {

    private final TextField display;
    private String operator;
    private double valor1, valor2;

    public CalcAWT() {
        setTitle("Calculadora Swing");
        setSize(600, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBackground(new Color(255, 255, 255));
        setLocationRelativeTo(null);

        var mainPanel = new JPanel();
        mainPanel.setBackground(new Color(255, 235, 255));
        mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20 ,20));
        mainPanel.setAlignmentX(Component.CENTER_ALIGNMENT);

        display = new TextField("0", 20);
        display.setEditable(false);

        mainPanel.add(display);

        var botoes = new Panel(new GridLayout(4, 4, 5, 5));
        String[] labels = {
                "+", "-", "/", "*",
                "0", "1", "2", "3",
                "4", "5", "6", "7",
                "8", "9", "=", "."
        };

        for (String s : labels) {
            Button button = new Button(s);
            button.addActionListener(this::ActionPerformed);
            button.setSize(new Dimension(10, 10));
            botoes.add(button);
        }
        mainPanel.add(botoes);

        add(mainPanel);
        setVisible(true);
    }

    public void ActionPerformed (ActionEvent e) {
        String cmd = e.getActionCommand();

        if ("0123456789".contains(cmd)) {
            if (display.getText().equals("0")) {
                display.setText(cmd);
            } else {
                display.setText(display.getText() + cmd);
            }
        } else if ("+-*/".contains(cmd)) {
            valor1 = Double.parseDouble(display.getText());
            operator = cmd;
            display.setText("0");

        } else if (cmd.equals("=")) {
            valor2 = Double.parseDouble(display.getText());
            switch (operator) {
                case "+":
                    display.setText("" + (valor1+valor2));
                break;
                case "-":
                    display.setText("" + (valor1-valor2));
                break;
                case "*":
                    display.setText("" + (valor1*valor2));
                break;
                case "/":
                    display.setText("" + (valor1/valor2));
                break;

            }

        }
    }

    public static void main(String[] args) {
        new CalcAWT();
    }
}