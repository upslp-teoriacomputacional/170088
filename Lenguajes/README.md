Programa realizado en un proyecto de RUST en el editor VisualStudio Code
Nombre: Isai Adriel Dominguez Garcia
Matricula: 170088
Universidad politecnica de San luis Potosi
profesor: Juan Carlos Gonzales Ibarra
Descripcion: Programa para la manipulacion de cadenas

¿Que se hizo para llegar a la solucion?
Se investigo el uso que Rust le da a las String y sus comandos

Codigo
/*
Practica 4
Programa para la manipulacion de cadenas en el lenguaje RUST
Lenguaje RUST
Alumno: Isai Adriel Dominguez Garcia 
Matricula: 170088
*/



fn main() {
    //let single_quotes =  Rust Singlele Quotes ;
    let double_quotes = "Rust Double Quotes";

    //println!("{}",single_quotes);
    println!("{}",double_quotes);

    let message = String::from("Hello,Rust!");

    println!("{}",message.chars().nth(7).unwrap());

    //Text            =   P Y T H O N   
    //Positive Index =   0 1 2 3 4 5   
    //Negative Index = -(6 5 4 3 2 1)
    
    let text = "PYTHON";

    println!("{}",text.chars().nth(3).unwrap());
    println!("{}",text.chars().nth(2).unwrap());
    
    println!("{}",&message[7..10]);

    message = String::from("    Welcome Rust.  ");
    let message2: String = message.split_whitespace().collect();
    println!("palabra sin espacio {}", message2);

    message = String::from("Welcome Python!");
    println!("lower case string: {}",message.to_lowercase());

    message = String::from("Python tutorial with dotnettechpoint.com");
    println!("Upper case string: {}",message.to_uppercase());

    message = String::from("Welcome Python!");
    println!("Longitd: {}", message.chars().count());

    message = String::from("Python with dotnettechpoint.com");
    println!("Cadena reemplazada {}",message.replace("Python", "Rust"));

    let message3 = "Python, tutorials, with, dotnettechpoint.com".split(","); 
    for s in message3 {
      print!("{}", s);
    }

    message = String::from("python tutorials with dotnettechpoint.com");
    println!("{}",titlecase(message));

    message = String::from("python tutorials with dotnettechpoint.com");
    let cont = message.matches('t').count();
    println!("contar T: {}", cont);

    message = String::from("python tutorials with dotnettechpoint.com");
    println!("{:?}",message.rfind("with"));

    message = String::from("Python Tutorials");
    println!(" ".join(message));

    let first_string ="Python";
    let last_string = "Tutorial";
    let concat = format!("{} {}",first_string,last_string);

    first_string ="Python "; 
    let middle_string ="3";
    last_string = "Tutorial"; 
    concat = format!("{} {} {}", first_string,middle_string, last_string);
    println!("{}", concat);

    first_string ="Python ";  
    let middle_string = 3 ;
    let m_s: String = middle_string.to_string();
    last_string = "Tutorial";  
    concat = format!("{} {} {}", first_string,m_s, last_string);
    println!("{}", concat);  

}
