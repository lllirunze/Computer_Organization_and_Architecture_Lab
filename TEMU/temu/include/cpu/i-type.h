#ifndef __ITYPE_H__
#define __ITYPE_H__

make_helper(andi);
make_helper(lui);
make_helper(ori);
make_helper(xori);

make_helper(addi);
make_helper(addiu);
make_helper(slti);
make_helper(sltiu);

make_helper(lb);
make_helper(lbu);
make_helper(lh);
make_helper(lhu);
make_helper(lw);
make_helper(sb);
make_helper(sh);
make_helper(sw);

make_helper(beq);
make_helper(bne);
make_helper(bgtz);
make_helper(blez);
make_helper(b);


#endif
