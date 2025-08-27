import javax.swing.*;
import java.awt.*;

public class Class03 extends JFrame {

    public Class03 (){
        setTitle("Aula 03");
        setBackground(new Color(255, 235, 255));
        setSize(600, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        var mainPanel = new JPanel();
        mainPanel.setAlignmentX(Component.CENTER_ALIGNMENT);
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20 ,20));
        mainPanel.setLayout(new FlowLayout(FlowLayout.LEFT));

        var dimension = new Dimension(200, 100);
        var font = new Font("SansSerif", Font.PLAIN, 16);

        var label = new JLabel("Digite seu nome: ");
        label.setPreferredSize(dimension);

        var campo = new JTextField();
        campo.setPreferredSize(new Dimension(200, 30));

        var button = new JButton("Enviar");
        button.setSize(dimension);
        button.setFont(font);

        button.addActionListener(e -> {
            JOptionPane.showMessageDialog(mainPanel, "Seu nome é: " + campo.getText());
        });

        mainPanel.add(label);
        mainPanel.add(campo);
        mainPanel.add(button);
        add(mainPanel);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Class03();
    }
}
