class Solution:
    def calPoints(self, operations: List[str]) -> int:
        rec = []

        for op in operations:
            if op == "+":
                rec.append(rec[-1] + rec[-2])
               
            elif op == "D":
                rec.append(2*rec[-1])

            elif op == "C":
                rec.pop()

            else:
                rec.append(int(op))

        return sum(rec)