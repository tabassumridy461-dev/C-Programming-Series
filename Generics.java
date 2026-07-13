class Box<T> {

    private T value;

    public void setValue(T value) {

        this.value = value;

    }

    public T getValue() {

        return value;

    }

}

public class GenericBox {

    public static void main(String[] args) {

        Box<String> name = new Box<>();

        name.setValue("Tabassum Ridy");

        System.out.println("Name : " + name.getValue());

        Box<Integer> age = new Box<>();

        age.setValue(22);

        System.out.println("Age : " + age.getValue());

    }

}
