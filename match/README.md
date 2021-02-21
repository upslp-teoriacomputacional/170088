##Datos
-Programa realizado en un proyecto de RUST en el editor VisualStudio Code
-Nombre: Isai Adriel Dominguez Garcia
-Matricula: 170088
-Universidad politecnica de San luis Potosi
-profesor: Juan Carlos Gonzales Ibarra
-Descripcion: Programa para realizar grafos

##¿Que se hizo para llegar a la solucion?
-Se uso el crate regex el cual es la version de regular expression para rust

##Codigo
-/*
-Practica 3
-Programa para buscar que contenga [a-z0-9]
-Lenguaje RUST
-Alumno: Isai Adriel Dominguez Garcia 
-Matricula: 170088
-*/
-extern crate regex;

-use regex::Regex;
-//Funcion que valida se en la cadena se encuentra una letra minuscula[a-z] o un numero \d
-fn test(text: &str){
-    let re = Regex::new(r"[a-z]\d").unwrap();
-    match re.captures(text){
-        Some(caps) =>  println!("Found match {}", &caps[0]),
-        None => println!("couldnt find match ...")
-    }
-}
-
-fn main() {
-    test(r"");
-    test("az09");
-    test("az09.\n");
-    test("az09.#");
-    test("az09.X");
-}
