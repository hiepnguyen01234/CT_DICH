#include <compile.h>


void checkNum(Instruction* inst) {
  switch (inst->op) {

  case 1: printf("LA %d,%d", inst->p, inst->q); break;
  case 2: printf("LV %d,%d", inst->p, inst->q); break;
  case 3: printf("LC %d", inst->q); break;
  case 4: printf("LI"); break;
  case 5: printf("INT %d", inst->q); break;
  case 6: printf("DCT %d", inst->q); break;
  case 7: printf("J %d", inst->q); break;
  case 8: printf("FJ %d", inst->q); break;
  case 9: printf("HL"); break;
  case 10: printf("ST"); break;
  case 11: printf("CALL %d,%d", inst->p, inst->q); break;
  case 12: printf("EP"); break;
  case 13: printf("EF"); break;
  case 14: printf("RC"); break;
  case 15: printf("RI"); break;
  case 16: printf("WRC"); break;
  case 17: printf("WRI"); break;
  case 18: printf("WLN"); break;
  case 19: printf("AD"); break;
  case 20: printf("SB"); break;
  case 21: printf("ML"); break;
  case 22: printf("DV"); break;
  case 23: printf("NEG"); break;
  case 24: printf("CV"); break;
  case 25: printf("EQ"); break;
  case 26: printf("NE"); break;
  case 27: printf("GT"); break;
  case 28: printf("LT"); break;
  case 29: printf("GE"); break;
  case 30: printf("LE"); break;

  case 31: printf("BP"); break;
  default: break;

  /*case OP_LA: printf("LA %d,%d", inst->p, inst->q); break;
  case OP_LV: printf("LV %d,%d", inst->p, inst->q); break;
  case OP_LC: printf("LC %d", inst->q); break;
  case OP_LI: printf("LI"); break;
  case OP_INT: printf("INT %d", inst->q); break;
  case OP_DCT: printf("DCT %d", inst->q); break;
  case OP_J: printf("J %d", inst->q); break;
  case OP_FJ: printf("FJ %d", inst->q); break;
  case OP_HL: printf("HL"); break;
  case OP_ST: printf("ST"); break;
  case OP_CALL: printf("CALL %d,%d", inst->p, inst->q); break;
  case OP_EP: printf("EP"); break;
  case OP_EF: printf("EF"); break;
  case OP_RC: printf("RC"); break;
  case OP_RI: printf("RI"); break;
  case OP_WRC: printf("WRC"); break;
  case OP_WRI: printf("WRI"); break;
  case OP_WLN: printf("WLN"); break;
  case OP_AD: printf("AD"); break;
  case OP_SB: printf("SB"); break;
  case OP_ML: printf("ML"); break;
  case OP_DV: printf("DV"); break;
  case OP_NEG: printf("NEG"); break;
  case OP_CV: printf("CV"); break;
  case OP_EQ: printf("EQ"); break;
  case OP_NE: printf("NE"); break;
  case OP_GT: printf("GT"); break;
  case OP_LT: printf("LT"); break;
  case OP_GE: printf("GE"); break;
  case OP_LE: printf("LE"); break;

  case OP_BP: printf("BP"); break;
  default: break;*/
  }
}