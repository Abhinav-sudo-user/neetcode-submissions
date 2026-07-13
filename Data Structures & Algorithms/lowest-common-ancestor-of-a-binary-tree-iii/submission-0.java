/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node parent;
};
*/

class Solution {
    public Node lowestCommonAncestor(Node p, Node q) {
        Set<Node> pop = new HashSet<>();

        while(p != null){
            pop.add(p);
            p = p.parent;
        }

        while(q != null){
            if (pop.contains(q)){
                return q;
            }
            q = q.parent;
        }
return null;    
}
}