class Solution(object):
    def cloneGraph(self, node):
        """
        :type node: Node
        :rtype: Node
        """
        if not node:
            return None
        h = {}
        def dfs(node):
            if node in h:
                return
            if node not in h:
                mnode = Node(node.val)
                h[node] = mnode
            for neigh in node.neighbors:
                dfs(neigh)
                mnode.neighbors.append(h[neigh])
        dfs(node)
        return h[node] 