/*
Practica 2
Programa para realizar grafos
Lenguaje RUST
Alumno: Isai Adriel Dominguez Garcia 
Matricula: 170088
*/
pub mod refs;

fn main(){
    rc_refcell();
}

fn rc_refcell() {
    use refs::Graph;

    let mut g: Graph<String> = Graph::new();
    let root = g.add_root_node(String::from("padre"));
    let n1 = g.add_child(root.clone(), String::from("nodo1"));
    let n2 = g.add_child(root.clone(), String::from("nodo2"));
    let n3 = g.add_child(n2.clone(), String::from("nodo3"));
    g.add_child_node(n3.clone(), root.clone());

    println!("root {}", root.borrow().value);

    let mut c = g.child(root.clone(), 0);
    
    println!("n1 {}", c.borrow().value);
    c = g.child(root.clone(), 1);
    println!("n2 {}", c.borrow().value);
    c = g.child(n2.clone(), 0);
    println!("n3 {}", c.borrow().value);
    c = g.child(n3.clone(), 0);
    println!("root {}", c.borrow().value);

    println!("{} {}",2, root.borrow().childs.len());
    println!("{} {}",1, n2.borrow().childs.len());
    println!("{} {}",1, n3.borrow().childs.len());
    println!("{} {}",0, n1.borrow().childs.len());
}