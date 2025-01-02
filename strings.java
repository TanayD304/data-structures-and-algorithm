class strings {
    public static void main(String[] args) {
        String name = "Tanay Dubey";
        String name2 = "Kiran Dubey";
        System.out.println(name);
        System.out.println(name.length());
        System.out.println(name.charAt(6));
        System.out.println(name.indexOf('u'));
        System.out.println(name.substring(0,5));
        System.out.println(name.substring(3));
        System.out.println(name.substring(3,6) + name.substring(8, 10));
        System.out.println(name.equals(name2));
        System.out.println(name.substring(6).equals(name2.substring(6)));
    }
}