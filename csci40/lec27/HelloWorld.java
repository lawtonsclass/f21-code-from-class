// In Java, everything is a class. If you just want a function, you
// need to put it inside a class. HelloWorld is public, so it's
// visible to the outside world--that means other people could import
// it an use it.
// This file is forced to be named HelloWorld.java
public class HelloWorld {
  // The main function lives inside the public class associated with
  // the file. You must use the declaration below--args are the
  // command line arguments--even if you're not using args.
  // In Java, args is an array of String. 
  // main is a public method inside the HelloWorld class
  // It's also "static", which means it belongs to the class itself,
  // rather than any object of that class.
  // You don't have to declare any functions/methods in Java--it just
  // finds them no matter the order you use.
  public static void main(String[] args) {
    // System lives inside java.lang (which is automatically imported
    // for us)
    System.out.println("Hello, world!");
  }
}
