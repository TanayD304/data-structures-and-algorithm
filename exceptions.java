class exceptions {
    public static void main(String[] args) {
        try {
            System.out.println(10/0);
        } catch (Exception e) {
            System.out.println("Division by 0");
        } finally {
            System.out.println("Bye");
        }
    }
}