/** 
*  Generator: vscode-decompiler@0.1.0 (https://marketplace.visualstudio.com/items?itemName=tintinweb.vscode-decompiler)
*  Target:    c:\Users\anran\Downloads\Oracle_Billiards\billiards\pool\billiards_sim.dll
**/

/* Function: FUN_10001000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001000(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  //sqrt(a^2 + b^2) so dVar3 finds a diagonal from (0,0) to (a,b)
  dVar3 = sqrt(dVar1 * dVar1 + dVar2 * dVar2);
  if (dVar3 != _DAT_10003070) {
    //this is doing 1/scalar * vector3 based on the the distance between the first two points?
    *param_1 = (1.0 / dVar3) * dVar1;
    param_1[1] = (1.0 / dVar3) * dVar2;
  }
  return;
}

/*
combining three 8-bit integers into a single 32-bit value by shifting and bitwise ORing the values together. The resulting value is returned as an unsigned integer.
is this a sum of a vector3?
*/
/* Function: FUN_10001051 */
float10 __fastcall FUN_10001051(double *param_1)

{
  double dVar1;
  
  dVar1 = sqrt(*param_1 * *param_1 + param_1[1] * param_1[1]);
  return (float10)dVar1;
}

/* Function: FUN_10001071 */
uint __cdecl FUN_10001071(int *param_1)

{
  return (*param_1 << 8 | param_1[1]) << 0x10 | param_1[2];
}

/* Function: FUN_10001084 */
uint __thiscall FUN_10001084(void *this,char *param_1,int param_2,int param_3,undefined8 *param_4)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = *(short **)(param_2 + 8);
  do {
    if (psVar1 == (short *)0x0) {
LAB_10001126:
      Lerp_Interp::report_error((Lerp_Interp *)this,param_1);
      return (uint)psVar1 & 0xffffff00;
    }
    if (*psVar1 == 0x12) {
      psVar1 = *(short **)(psVar1 + 2);
    }
    if (psVar1 == (short *)0x0) goto LAB_10001126;
    psVar2 = *(short **)(psVar1 + 4);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else if (*psVar2 == 0x12) {
      psVar2 = *(short **)(psVar2 + 2);
    }
    this = *(void **)(psVar2 + 6);
                    /* WARNING: Load size is inaccurate */
    if (((short *)this != (short *)0x0) && (*this == 0x12)) {
      this = *(short **)((int)this + 4);
    }
                    /* WARNING: Load size is inaccurate */
    if ((*this == 2) &&
       (this = *(short **)((int)this + 4), (short *)this == *(short **)(param_3 + 4))) {
      if (psVar2[5] == 2) {
        psVar1 = *(short **)(psVar2 + 8);
        if ((psVar1 != (short *)0x0) && (*psVar1 == 0x12)) {
          psVar1 = *(short **)(psVar1 + 2);
        }
        if (*psVar1 == 3) {
          *param_4 = *(undefined8 *)(psVar1 + 4);
          return CONCAT31((int3)((uint)param_4 >> 8),1);
        }
      }
      goto LAB_10001126;
    }
    psVar1 = *(short **)(psVar1 + 2);
  } while( true );
}

/* Function: FUN_10001136 */
short * __cdecl FUN_10001136(Lerp_Interp *param_1,Database *param_2,char *param_3)

{
  Atom *pAVar1;
  short *psVar2;
  Lerp_Interp *this;
  
  pAVar1 = Parser::make_atom(*(Parser **)(param_1 + 8),param_3);
  psVar2 = (short *)Database::lookup_named_slot(param_2,param_1,pAVar1);
  if ((psVar2 == (short *)0x0) || (*psVar2 != 5)) {
    Lerp_Interp::report_error(this,(char *)param_1);
    psVar2 = (short *)0x0;
  }
  return psVar2;
}

/* Function: FUN_10001172 */
void __cdecl FUN_10001172(Lerp_Memory_Manager **param_1,Lerp_Call_Record *param_2)

{
  bool bVar1;
  Lerp_Interp *this;
  short *psVar2;
  double local_854 [4];
  undefined4 local_834;
  double local_c;
  
  bVar1 = argument_count((Lerp_Interp *)param_1,param_2,2);
  if (bVar1) {
    psVar2 = *(short **)(param_2 + 0x24);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else if (*psVar2 == 0x12) {
      psVar2 = *(short **)(psVar2 + 2);
    }
    if (*psVar2 == 5) {
      bVar1 = coerce_to_float((Lerp_Interp *)param_1,param_2,1,&local_c);
      if (bVar1) {
        FUN_10002073(local_854);
        local_854[0] = local_c;
        FUN_10001223((Lerp_Interp *)param_1,(int)psVar2,(int)local_854);
        local_834 = 0xffffffff;
        FUN_1000149d(local_854);
        FUN_10001cc2(param_1,(int)param_2,local_854,(int)psVar2);
      }
    }
    else {
      Lerp_Interp::report_error(this,(char *)param_1);
    }
  }
  return;
}

/* Function: FUN_10001223 */
void __cdecl FUN_10001223(Lerp_Interp *param_1,int param_2,int param_3)

{
  undefined8 *this;
  int iVar1;
  bool bVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  
  *(undefined4 *)(param_3 + 8) = 0;
  for (psVar3 = *(short **)(param_2 + 8); psVar3 != (short *)0x0; psVar3 = *(short **)(psVar3 + 2))
  {
    if (*psVar3 == 0x12) {
      psVar3 = *(short **)(psVar3 + 2);
    }
    if (psVar3 == (short *)0x0) break;
    psVar5 = *(short **)(psVar3 + 4);
    if ((psVar5 != (short *)0x0) && (*psVar5 == 0x12)) {
      psVar5 = *(short **)(psVar5 + 2);
    }
    if (psVar5[5] != 0) {
      psVar4 = *(short **)(psVar5 + 6);
      if ((psVar4 != (short *)0x0) && (*psVar4 == 0x12)) {
        psVar4 = *(short **)(psVar4 + 2);
      }
      if (((*psVar4 == 4) &&
          (bVar2 = Unicode::strings_match((char *)(psVar4 + 2),s_Entity_10004168), bVar2)) &&
         (psVar5[5] == 2)) {
        iVar1 = *(int *)(param_3 + 8);
        *(int *)(param_3 + 8) = iVar1 + 1;
        this = (undefined8 *)(iVar1 * 0x20 + 0x28 + param_3);
        psVar5 = *(short **)(psVar5 + 8);
        if (psVar5 == (short *)0x0) {
          psVar5 = (short *)0x0;
        }
        else if (*psVar5 == 0x12) {
          psVar5 = *(short **)(psVar5 + 2);
        }
        if (*psVar5 != 5) {
          Lerp_Interp::report_error((Lerp_Interp *)this,(char *)param_1);
          return;
        }
        FUN_10001386(param_1,(Database *)psVar5,this);
        FUN_10001437(param_1,(Database *)psVar5,(undefined8 *)(param_3 + (iVar1 * 5 + 0xa5) * 8));
      }
    }
  }
  FUN_10001338(param_1,*(Database **)(param_1 + 0x14),s_play_field_width_10004120,
               (undefined8 *)(param_3 + 0x10));
  FUN_10001338(param_1,*(Database **)(param_1 + 0x14),s_play_field_height_1000410c,
               (undefined8 *)(param_3 + 0x18));
  return;
}

/* Function: FUN_10001338 */
void __cdecl FUN_10001338(Lerp_Interp *param_1,Database *param_2,char *param_3,undefined8 *param_4)

{
  Atom *pAVar1;
  short *psVar2;
  Lerp_Interp *this;
  
  pAVar1 = Parser::make_atom(*(Parser **)(param_1 + 8),param_3);
  psVar2 = (short *)Database::lookup_named_slot(param_2,param_1,pAVar1);
  if ((psVar2 == (short *)0x0) || (*psVar2 != 3)) {
    Lerp_Interp::report_error(this,(char *)param_1);
  }
  else {
    *param_4 = *(undefined8 *)(psVar2 + 4);
  }
  return;
}

/* Function: FUN_10001386 */
void __cdecl FUN_10001386(Lerp_Interp *param_1,Database *param_2,undefined8 *param_3)

{
  FUN_100013b8(param_1,param_2,s_position_100041c4,param_3);
  FUN_100013b8(param_1,param_2,s_velocity_100041b8,param_3 + 2);
  return;
}

/* Function: FUN_100013b8 */
void __cdecl FUN_100013b8(Lerp_Interp *param_1,Database *param_2,char *param_3,undefined8 *param_4)

{
  short *psVar1;
  Integer *pIVar2;
  undefined4 uVar3;
  Lerp_Interp *this;
  void *this_00;
  void *this_01;
  undefined8 *puVar4;
  undefined8 local_14;
  undefined8 local_c;
  
  psVar1 = FUN_10001136(param_1,param_2,param_3);
  if (psVar1 == (short *)0x0) {
    Lerp_Interp::report_error(this,(char *)param_1);
  }
  else {
    puVar4 = &local_c;
    pIVar2 = Parser::make_integer(*(Parser **)(param_1 + 8),1);
    uVar3 = FUN_10001084(this_00,(char *)param_1,(int)psVar1,(int)pIVar2,puVar4);
    if ((char)uVar3 != '\0') {
      puVar4 = &local_14;
      pIVar2 = Parser::make_integer(*(Parser **)(param_1 + 8),2);
      uVar3 = FUN_10001084(this_01,(char *)param_1,(int)psVar1,(int)pIVar2,puVar4);
      if ((char)uVar3 != '\0') {
        *param_4 = local_c;
        param_4[1] = local_14;
      }
    }
  }
  return;
}

/* Function: FUN_10001437 */
void __cdecl FUN_10001437(Lerp_Interp *param_1,Database *param_2,undefined8 *param_3)

{
  FUN_10001338(param_1,param_2,&DAT_100041e8,param_3);
  FUN_10001338(param_1,param_2,&DAT_100041e4,param_3 + 1);
  FUN_10001338(param_1,param_2,&DAT_100041e0,param_3 + 2);
  FUN_10001338(param_1,param_2,s_radius_100041d8,param_3 + 3);
  FUN_10001338(param_1,param_2,&DAT_100041d0,param_3 + 4);
  return;
}

/* Function: FUN_1000149d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000149d(double *param_1)

{
  int iVar1;
  int iVar2;
  int local_3c [4];
  double local_2c;
  double local_14;
  double local_c;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    do {
      FUN_100015eb(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 1));
  }
  local_14 = *param_1;
  local_3c[0] = 0;
  local_2c = _DAT_10003080;
  if (0 < *(int *)(param_1 + 1)) {
    do {
      FUN_10001657((int)param_1,iVar2,local_3c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 1));
    if (local_2c < _DAT_10003078) {
      local_c = local_2c;
      FUN_10001570((int)param_1,local_2c);
      *param_1 = *param_1 - local_c * local_14;
      FUN_10001b1e((int)param_1,local_3c);
      if (*param_1 <= _DAT_10003070) {
        return;
      }
      FUN_1000149d(param_1);
      return;
    }
  }
  FUN_10001545((int)param_1);
  return;
}

/* Function: FUN_10001545 */
void __cdecl FUN_10001545(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      iVar3 = iVar3 + 1;
      puVar4 = puVar1 + 0xa0;
      puVar5 = puVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = puVar1 + 8;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}

/* Function: FUN_10001570 */
void __cdecl FUN_10001570(int param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    pdVar1 = (double *)(param_1 + 0x40);
    do {
      iVar2 = iVar2 + 1;
      pdVar1[-3] = (pdVar1[0x4d] - pdVar1[-3]) * param_2 + pdVar1[-3];
      pdVar1[-2] = (pdVar1[0x4e] - pdVar1[-2]) * param_2 + pdVar1[-2];
      pdVar1[-1] = (pdVar1[0x4f] - pdVar1[-1]) * param_2 + pdVar1[-1];
      *pdVar1 = (pdVar1[0x50] - *pdVar1) * param_2 + *pdVar1;
      pdVar1 = pdVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}

/* Function: FUN_100015eb */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100015eb(double *param_1,int param_2)

{
  double dVar1;
  
  dVar1 = *param_1;
  param_1[param_2 * 4 + 0x55] = dVar1 * param_1[param_2 * 4 + 7] + param_1[param_2 * 4 + 5];
  param_1[param_2 * 4 + 0x56] = dVar1 * param_1[param_2 * 4 + 8] + param_1[param_2 * 4 + 6];
  dVar1 = _DAT_10003078 - _DAT_10003058 * dVar1;
  param_1[param_2 * 4 + 0x57] = dVar1 * param_1[param_2 * 4 + 7];
  param_1[param_2 * 4 + 0x58] = dVar1 * param_1[param_2 * 4 + 8];
  return;
}

/* Function: FUN_10001657 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001657(int param_1,int param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x20 + param_1;
  dVar1 = *(double *)(param_1 + 0x540 + param_2 * 0x28);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x18);
  FUN_1000178e(*(double *)(iVar4 + 0x28),*(double *)(iVar4 + 0x2a8),dVar1,param_2,0x3ff0000000000000
               ,0,0,param_1,param_3);
  FUN_1000178e(*(double *)(iVar4 + 0x30),*(double *)(iVar4 + 0x2b0),dVar1,param_2,0,
               0x3ff0000000000000,1,param_1,param_3);
  FUN_1000180b(*(double *)(iVar4 + 0x28),*(double *)(iVar4 + 0x2a8),dVar2 - dVar1,param_2,
               _DAT_10003088,0,2,param_1,param_3);
  FUN_1000180b(*(double *)(iVar4 + 0x30),*(double *)(iVar4 + 0x2b0),dVar3 - dVar1,param_2,0,
               _DAT_10003088,3,param_1,param_3);
  iVar4 = param_2;
  while (iVar4 = iVar4 + 1, iVar4 < *(int *)(param_1 + 8)) {
    FUN_10001888(param_1,param_2,iVar4,param_3);
  }
  return;
}

/* Function: FUN_1000178e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1000178e(double param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  double dVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_2 < param_3) {
    dVar1 = (param_3 - param_1) / (param_2 - param_1);
    if (dVar1 < _DAT_10003070) {
      dVar1 = 0.0;
    }
    if (_DAT_10003078 < dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= *(double *)(param_9 + 4)) {
      *(double *)(param_9 + 4) = dVar1;
      local_14 = (undefined4)param_5;
      param_9[6] = local_14;
      *param_9 = 1;
      uStack_10 = (undefined4)((ulonglong)param_5 >> 0x20);
      param_9[7] = uStack_10;
      local_c = (undefined4)param_6;
      param_9[8] = local_c;
      param_9[1] = param_4;
      uStack_8 = (undefined4)((ulonglong)param_6 >> 0x20);
      param_9[9] = uStack_8;
      param_9[2] = param_7;
      return;
    }
  }
  return;
}

/* Function: FUN_1000180b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1000180b(double param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  double dVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_3 < param_2) {
    dVar1 = (param_3 - param_1) / (param_2 - param_1);
    if (dVar1 < _DAT_10003070) {
      dVar1 = 0.0;
    }
    if (_DAT_10003078 < dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= *(double *)(param_9 + 4)) {
      *(double *)(param_9 + 4) = dVar1;
      local_14 = (undefined4)param_5;
      param_9[6] = local_14;
      *param_9 = 1;
      uStack_10 = (undefined4)((ulonglong)param_5 >> 0x20);
      param_9[7] = uStack_10;
      local_c = (undefined4)param_6;
      param_9[8] = local_c;
      param_9[1] = param_4;
      uStack_8 = (undefined4)((ulonglong)param_6 >> 0x20);
      param_9[9] = uStack_8;
      param_9[2] = param_7;
      return;
    }
  }
  return;
}

/* Function: FUN_10001888 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001888(int param_1,int param_2,int param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_9c [4];
  double local_8c;
  undefined8 local_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  double local_74;
  double local_6c;
  double local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  int local_44 [2];
  double local_3c;
  double local_34;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  local_5c = *(double *)(param_1 + 0x540 + param_2 * 0x28);
  iVar8 = param_2 * 0x20 + param_1;
  pdVar1 = (double *)(iVar8 + 0x28);
  local_4c = *(double *)(param_1 + 0x540 + param_3 * 0x28);
  iVar7 = param_3 * 0x20 + param_1;
  dVar3 = *pdVar1 - *(double *)(iVar7 + 0x28);
  dVar5 = *(double *)(iVar8 + 0x30) - *(double *)(iVar7 + 0x30);
  pdVar2 = (double *)(iVar7 + 0x28);
  local_1c = *(double *)(iVar7 + 0x2b0) - *(double *)(iVar7 + 0x30);
  local_6c = *(double *)(iVar8 + 0x2b0) - *(double *)(iVar8 + 0x30);
  local_14 = (*(double *)(iVar8 + 0x2a8) - *pdVar1) - (*(double *)(iVar7 + 0x2a8) - *pdVar2);
  local_c = local_6c - local_1c;
  dVar4 = local_14 * dVar3 + local_c * dVar5;
  FUN_100021fc(local_14 * local_14 + local_c * local_c,dVar4 + dVar4,
               (dVar3 * dVar3 + dVar5 * dVar5) - (local_4c + local_5c) * (local_4c + local_5c),
               local_44);
  if (local_44[0] != 0) {
    local_8c = local_3c;
    if (local_44[0] == 1) {
      if (local_3c < _DAT_10003070) {
        return;
      }
      if (_DAT_10003078 < local_3c) {
        return;
      }
    }
    else {
      if (local_34 < _DAT_10003070) {
        return;
      }
      if (_DAT_10003078 < local_3c) {
        return;
      }
      if (local_3c < _DAT_10003070) {
        local_8c = 0.0;
      }
    }
    if (local_8c <= *(double *)(param_4 + 4)) {
      if ((local_8c != _DAT_10003070) ||
         (_DAT_10003070 <
          (*pdVar2 - *pdVar1) * (*(double *)(iVar8 + 0x38) + *(double *)(iVar7 + 0x38)) +
          (*(double *)(iVar7 + 0x30) - *(double *)(iVar8 + 0x30)) *
          (*(double *)(iVar8 + 0x40) + *(double *)(iVar7 + 0x40)))) {
        local_9c[0] = 2;
        local_9c[1] = (int)pdVar1 + (-0x28 - param_1) >> 5;
        local_14 = (*(double *)(iVar8 + 0x2a8) - *pdVar1) * local_8c + *pdVar1;
        local_9c[2] = (int)pdVar2 + (-0x28 - param_1) >> 5;
        local_c = (*(double *)(iVar8 + 0x2b0) - *(double *)(iVar8 + 0x30)) * local_8c +
                  *(double *)(iVar8 + 0x30);
        local_1c = *(double *)(iVar7 + 0x2b0) - *(double *)(iVar7 + 0x30);
        local_74 = (*(double *)(iVar7 + 0x2a8) - *pdVar2) * local_8c;
        local_24 = local_74 + *pdVar2;
        local_64 = local_14 - local_24;
        dVar3 = local_c - (local_1c * local_8c + *(double *)(iVar7 + 0x30));
        local_4c._0_4_ = SUB84(dVar3,0);
        local_5c._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_4c._4_4_ = local_5c._4_4_;
        local_5c = dVar3;
        local_54 = local_64;
        FUN_10001000((double *)&local_54);
        uStack_7c = (undefined4)local_4c;
        uStack_78 = local_4c._4_4_;
        local_84 = local_54;
        uVar6 = FUN_10001071(local_9c);
        if (uVar6 != *(uint *)(param_1 + 0x20)) {
          piVar9 = local_9c;
          for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
            *param_4 = *piVar9;
            piVar9 = piVar9 + 1;
            param_4 = param_4 + 1;
          }
        }
      }
    }
  }
  return;
}

/* Function: FUN_10001b1e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001b1e(int param_1,int *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int unaff_ESI;
  SOCKET unaff_EDI;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  double local_10;
  double *local_8;
  
  iVar5 = param_2[1];
  pdVar2 = (double *)(iVar5 * 0x20 + 0x28 + param_1);
  if (*param_2 == 1) {
    dVar4 = *(double *)(param_1 + 0x548 + iVar5 * 0x28);
    dVar6 = 1.0 / dVar4;
    dVar7 = *(double *)(param_2 + 8);
    dVar4 = -((_DAT_10003060 + _DAT_10003078) *
              (*(double *)(param_2 + 6) * pdVar2[2] + *(double *)(param_2 + 8) * pdVar2[3]) * dVar4)
    ;
    pdVar2[2] = *(double *)(param_2 + 6) * dVar4 * dVar6 + pdVar2[2];
    pdVar2[3] = dVar7 * dVar4 * dVar6 + pdVar2[3];
  }
  else {
    pdVar1 = pdVar2 + 2;
    local_10 = _DAT_10003078 / *(double *)(param_1 + 0x548 + iVar5 * 0x28);
    pdVar3 = (double *)(param_2[2] * 0x20 + 0x28 + param_1);
    local_18 = _DAT_10003078 / *(double *)(param_1 + 0x548 + param_2[2] * 0x28);
    dVar6 = *pdVar1;
    dVar7 = pdVar2[3];
    local_8 = pdVar3 + 2;
    dVar4 = *local_8;
    dVar8 = pdVar3[3];
    local_28 = *pdVar2 - *pdVar3;
    local_20 = pdVar2[1] - pdVar3[1];
    FUN_10001000((double *)&local_28);
    dVar4 = -(((_DAT_10003068 + _DAT_10003078) *
              ((dVar6 - dVar4) * local_28 + local_20 * (dVar7 - dVar8))) / (local_18 + local_10));
    dVar6 = local_28 * dVar4;
    dVar4 = local_20 * dVar4;
    dVar8 = dVar6 * local_18 * _DAT_10003088;
    dVar7 = dVar4 * local_18 * _DAT_10003088;
    *pdVar1 = dVar6 * local_10 + *pdVar1;
    pdVar2[3] = dVar4 * local_10 + pdVar2[3];
    *local_8 = dVar8 + *local_8;
    local_8[1] = dVar7 + local_8[1];
    enumerate_gc_roots(unaff_EDI,unaff_ESI);
    uVar9 = FUN_10001071(param_2);
    *(uint *)(param_1 + 0x20) = uVar9;
  }
  return;
}

/* Function: FUN_10001cc2 */
void __cdecl FUN_10001cc2(Lerp_Memory_Manager **param_1,int param_2,double *param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_4 + 4);
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)0x0;
  }
  else if (*psVar4 == 0x12) {
    psVar4 = *(short **)(psVar4 + 2);
  }
  psVar1 = FUN_10002021((Lerp_Interp *)param_1,s_Entity_10004168);
  psVar2 = FUN_10002021((Lerp_Interp *)param_1,s_Vector3_100041ec);
  if ((psVar1 != (short *)0x0) && (psVar2 != (short *)0x0)) {
    uVar3 = FUN_10001d22(param_1,param_3,psVar4,psVar1,psVar2);
    *(undefined4 *)(param_2 + 0x20) = uVar3;
  }
  return;
}

/* Function: FUN_10001d22 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10001d22(Lerp_Memory_Manager **param_1,double *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  First_Class *pFVar1;
  Atom *pAVar2;
  Atom *pAVar3;
  Atom *pAVar4;
  Atom *pAVar5;
  Atom *pAVar6;
  Atom *pAVar7;
  Atom *pAVar8;
  Atom *pAVar9;
  Atom *pAVar10;
  String *pSVar11;
  Float *pFVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  double *pdVar16;
  undefined2 *this;
  double *pdVar17;
  int local_10;
  undefined2 *local_8;
  
  pFVar1 = (First_Class *)param_1[0x28];
  pAVar2 = Parser::make_atom((Parser *)param_1[2],s_position_100041c4);
  pAVar3 = Parser::make_atom((Parser *)param_1[2],s_velocity_100041b8);
  pAVar4 = Parser::make_atom((Parser *)param_1[2],s_timestep_10004200);
  pAVar5 = Parser::make_atom((Parser *)param_1[2],s_cue_ball_100041f4);
  pAVar6 = Parser::make_atom((Parser *)param_1[2],s_radius_100041d8);
  pAVar7 = Parser::make_atom((Parser *)param_1[2],&DAT_100041e8);
  pAVar8 = Parser::make_atom((Parser *)param_1[2],&DAT_100041e4);
  pAVar9 = Parser::make_atom((Parser *)param_1[2],&DAT_100041e0);
  pAVar10 = Parser::make_atom((Parser *)param_1[2],&DAT_100041d0);
  pSVar11 = Parser::make_string((Parser *)param_1[2],s_Entity_10004168);
  local_8 = (undefined2 *)Lerp_Memory_Manager::allocate(*param_1,0xc,6);
  if (local_8 == (undefined2 *)0x0) {
    local_8 = (undefined2 *)0x0;
  }
  else {
    *local_8 = 5;
    *(undefined4 *)(local_8 + 4) = 0;
    *(undefined4 *)(local_8 + 2) = 0;
  }
  pFVar12 = Parser::make_float((Parser *)param_1[2],*param_2);
  Database::add_assertion
            ((Database *)local_8,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar4,
             (First_Class *)pFVar12);
  local_10 = 0;
  if (0 < *(int *)(param_2 + 1)) {
    pdVar16 = param_2 + 0x55;
    pdVar17 = param_2 + 0xa6;
    do {
      puVar13 = FUN_10001fa4(param_1,param_5,pdVar16);
      puVar14 = FUN_10001fa4(param_1,param_5,pdVar16 + 2);
      puVar15 = (undefined2 *)Lerp_Memory_Manager::allocate(*param_1,0xc,6);
      this = (undefined2 *)0x0;
      if (puVar15 != (undefined2 *)0x0) {
        *(undefined4 *)(puVar15 + 4) = 0;
        *(undefined4 *)(puVar15 + 2) = 0;
        *puVar15 = 5;
        this = puVar15;
      }
      *(undefined4 *)(this + 2) = param_4;
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar2,
                 (First_Class *)puVar13);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar3,
                 (First_Class *)puVar14);
      pFVar12 = Parser::make_float((Parser *)param_1[2],pdVar17[2]);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar6,
                 (First_Class *)pFVar12);
      pFVar12 = Parser::make_float((Parser *)param_1[2],pdVar17[3]);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar10,
                 (First_Class *)pFVar12);
      pFVar12 = Parser::make_float((Parser *)param_1[2],pdVar17[-1]);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar7,
                 (First_Class *)pFVar12);
      pFVar12 = Parser::make_float((Parser *)param_1[2],*pdVar17);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar8,
                 (First_Class *)pFVar12);
      pFVar12 = Parser::make_float((Parser *)param_1[2],pdVar17[1]);
      Database::add_assertion
                ((Database *)this,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar9,
                 (First_Class *)pFVar12);
      Database::add_assertion
                ((Database *)local_8,(Lerp_Interp *)param_1,(First_Class *)pSVar11,
                 (First_Class *)this);
      if (((pdVar17[-1] == *pdVar17) && (pdVar17[-1] == pdVar17[1])) &&
         (pdVar17[-1] != _DAT_10003070)) {
        Database::add_assertion
                  ((Database *)local_8,(Lerp_Interp *)param_1,pFVar1,(First_Class *)pAVar5,
                   (First_Class *)this);
      }
      local_10 = local_10 + 1;
      pdVar16 = pdVar16 + 4;
      pdVar17 = pdVar17 + 5;
    } while (local_10 < *(int *)(param_2 + 1));
  }
  *(undefined4 *)(local_8 + 2) = param_3;
  return;
}

/* Function: FUN_10001fa4 */
undefined2 * __cdecl FUN_10001fa4(Lerp_Memory_Manager **param_1,undefined4 param_2,double *param_3)

{
  undefined2 *puVar1;
  Float *pFVar2;
  Integer *pIVar3;
  undefined2 *this;
  
  puVar1 = (undefined2 *)Lerp_Memory_Manager::allocate(*param_1,0xc,6);
  this = (undefined2 *)0x0;
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 5;
    this = puVar1;
  }
  *(undefined4 *)(this + 2) = param_2;
  pFVar2 = Parser::make_float((Parser *)param_1[2],*param_3);
  pIVar3 = Parser::make_integer((Parser *)param_1[2],1);
  Database::add_assertion
            ((Database *)this,(Lerp_Interp *)param_1,(First_Class *)pIVar3,(First_Class *)pFVar2);
  pFVar2 = Parser::make_float((Parser *)param_1[2],param_3[1]);
  pIVar3 = Parser::make_integer((Parser *)param_1[2],2);
  Database::add_assertion
            ((Database *)this,(Lerp_Interp *)param_1,(First_Class *)pIVar3,(First_Class *)pFVar2);
  return this;
}

/* Function: FUN_10002021 */
short * __cdecl FUN_10002021(Lerp_Interp *param_1,char *param_2)

{
  Atom *pAVar1;
  short *psVar2;
  Lerp_Interp *this;
  Lerp_Interp *this_00;
  
  pAVar1 = Parser::make_atom(*(Parser **)(param_1 + 8),param_2);
  psVar2 = (short *)Database::lookup_named_slot(*(Database **)(param_1 + 0x14),param_1,pAVar1);
  if ((psVar2 == (short *)0x0) || (*psVar2 != 6)) {
    Lerp_Interp::report_error(this,(char *)param_1);
    if (psVar2 != (short *)0x0) {
      Lerp_Interp::report_error(this_00,(char *)param_1);
    }
    psVar2 = (short *)0x0;
  }
  return psVar2;
}

/* Function: FUN_10002073 */
undefined4 __fastcall FUN_10002073(undefined4 param_1)

{
  return param_1;
}

/* Function: FUN_10002076 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002076(Lerp_Memory_Manager **param_1,Lerp_Call_Record *param_2)

{
  short *psVar1;
  bool bVar2;
  Lerp_Interp *this;
  int iVar3;
  double *pdVar4;
  float10 fVar5;
  double local_858;
  int local_850;
  undefined4 local_838;
  double local_820 [258];
  double local_10;
  short *local_8;
  
  bVar2 = argument_count((Lerp_Interp *)param_1,param_2,2);
  if (bVar2) {
    local_8 = *(short **)(param_2 + 0x24);
    if (local_8 == (short *)0x0) {
      local_8 = (short *)0x0;
    }
    else if (*local_8 == 0x12) {
      local_8 = *(short **)(local_8 + 2);
    }
    psVar1 = local_8;
    if (*local_8 == 5) {
      bVar2 = coerce_to_float((Lerp_Interp *)param_1,param_2,1,&local_10);
      if (bVar2) {
        FUN_10002073(&local_858);
        FUN_10001223((Lerp_Interp *)param_1,(int)psVar1,(int)&local_858);
        do {
          local_838 = 0xffffffff;
          local_858 = local_10;
          bVar2 = true;
          FUN_1000149d(&local_858);
          iVar3 = 0;
          if (local_850 < 1) break;
          pdVar4 = local_820;
          do {
            fVar5 = FUN_10001051(pdVar4);
            if ((float10)_DAT_10003090 < fVar5) {
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            pdVar4 = pdVar4 + 4;
          } while (iVar3 < local_850);
        } while (!bVar2);
        FUN_10001cc2(param_1,(int)param_2,&local_858,(int)local_8);
      }
    }
    else {
      Lerp_Interp::report_error(this,(char *)param_1);
    }
  }
  return;
}

/* Function: get_module_info */
void __cdecl get_module_info(undefined4 *param_1)

{
                    /* 0x2173  2  get_module_info */
  *param_1 = 0;
  param_1[1] = s_Billiards_Sim_10004258;
  return;
}

/* Function: init */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl init(int param_1)

{
                    /* 0x2182  3  init */
  _DAT_100042b0 = Parser::make_atom(*(Parser **)(param_1 + 8),&DAT_1000426c);
  _DAT_100042b4 = Parser::make_atom(*(Parser **)(param_1 + 8),&DAT_10004268);
  return;
}

/* Function: instantiate */
undefined2 * __cdecl instantiate(Lerp_Memory_Manager **param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
                    /* 0x21ad  4  instantiate */
  puVar1 = (undefined2 *)Lerp_Memory_Manager::allocate(*param_1,0xc,6);
  puVar2 = (undefined2 *)0x0;
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 5;
    puVar2 = puVar1;
  }
  register_proc((Lerp_Interp *)param_1,(Database *)puVar2,s_simulate_10004298,FUN_10001172);
  register_proc((Lerp_Interp *)param_1,(Database *)puVar2,
                s_simulate_until_everything_is_at__10004270,FUN_10002076);
  return puVar2;
}

/* Function: enumerate_gc_roots */
int enumerate_gc_roots(SOCKET s,int how)

{
  int in_EAX;
  
                    /* 0x21fb  1  enumerate_gc_roots
                       0x21fb  5  shutdown */
  return in_EAX;
}

/* Function: FUN_100021fc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100021fc(double param_1,double param_2,double param_3,undefined4 *param_4)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  double local_c;
  
  if (param_1 == _DAT_10003070) {
    if (param_2 != _DAT_10003070) {
      *param_4 = 1;
      *(double *)(param_4 + 2) = -(param_3 / param_2);
      return;
    }
  }
  else {
    dVar3 = param_2 * param_2 - param_1 * param_3 * _DAT_100030a0;
    if (_DAT_10003070 <= dVar3) {
      local_c = 1.0;
      if (param_2 < _DAT_10003070) {
        local_c = _DAT_10003088;
      }
      dVar3 = sqrt(dVar3);
      uVar2 = 1;
      dVar3 = (dVar3 * local_c + param_2) * _DAT_10003098;
      dVar1 = dVar3 / param_1;
      *(double *)(param_4 + 2) = dVar1;
      if ((dVar3 != _DAT_10003070) && (dVar3 = param_3 / dVar3, dVar3 != dVar1)) {
        uVar2 = 2;
        if (dVar3 <= dVar1) {
          *(double *)(param_4 + 4) = dVar1;
          *(double *)(param_4 + 2) = dVar3;
        }
        else {
          *(double *)(param_4 + 4) = dVar3;
        }
      }
      *param_4 = uVar2;
      return;
    }
  }
  *param_4 = 0;
  return;
}

/* Function: LERP.EXE::Lerp_Interp::report_error */
void __thiscall Lerp_Interp::report_error(Lerp_Interp *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x100022d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  report_error(this,param_1);
  return;
}

/* Function: LERP.EXE::Database::lookup_named_slot */
First_Class * __thiscall
Database::lookup_named_slot(Database *this,Lerp_Interp *param_1,Atom *param_2)

{
  First_Class *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = lookup_named_slot(this,param_1,param_2);
  return pFVar1;
}

/* Function: LERP.EXE::Parser::make_atom */
Atom * __thiscall Parser::make_atom(Parser *this,char *param_1)

{
  Atom *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = make_atom(this,param_1);
  return pAVar1;
}

/* Function: LERP.EXE::coerce_to_float */
bool __cdecl
coerce_to_float(Lerp_Interp *param_1,Lerp_Call_Record *param_2,int param_3,double *param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = coerce_to_float(param_1,param_2,param_3,param_4);
  return bVar1;
}

/* Function: LERP.EXE::argument_count */
bool __cdecl argument_count(Lerp_Interp *param_1,Lerp_Call_Record *param_2,int param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = argument_count(param_1,param_2,param_3);
  return bVar1;
}

/* Function: LERP.EXE::Unicode::strings_match */
bool __cdecl Unicode::strings_match(char *param_1,char *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = strings_match(param_1,param_2);
  return bVar1;
}

/* Function: LERP.EXE::Parser::make_integer */
Integer * __thiscall Parser::make_integer(Parser *this,int param_1)

{
  Integer *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100022fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = make_integer(this,param_1);
  return pIVar1;
}

/* Function: LERP.EXE::Database::add_assertion */
void __thiscall
Database::add_assertion
          (Database *this,Lerp_Interp *param_1,First_Class *param_2,First_Class *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10002300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  add_assertion(this,param_1,param_2,param_3);
  return;
}

/* Function: LERP.EXE::Database::add_assertion */
void __thiscall
Database::add_assertion
          (Database *this,Lerp_Interp *param_1,First_Class *param_2,First_Class *param_3,
          First_Class *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10002306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  add_assertion(this,param_1,param_2,param_3,param_4);
  return;
}

/* Function: LERP.EXE::Parser::make_float */
Float * __thiscall Parser::make_float(Parser *this,double param_1)

{
  Float *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000230c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = make_float(this,param_1);
  return pFVar1;
}

/* Function: LERP.EXE::Lerp_Memory_Manager::allocate */
void * __thiscall Lerp_Memory_Manager::allocate(Lerp_Memory_Manager *this,int param_1,int param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = allocate(this,param_1,param_2);
  return pvVar1;
}

/* Function: LERP.EXE::Parser::make_string */
String * __thiscall Parser::make_string(Parser *this,char *param_1)

{
  String *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = make_string(this,param_1);
  return pSVar1;
}

/* Function: LERP.EXE::register_proc */
void __cdecl
register_proc(Lerp_Interp *param_1,Database *param_2,char *param_3,
             _func_void_Lerp_Interp_ptr_Lerp_Call_Record_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1000231e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_proc(param_1,param_2,param_3,param_4);
  return;
}

/* Function: MSVCRT.DLL::sqrt */
double __cdecl sqrt(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sqrt(_X);
  return dVar1;
}

/* Function: FUN_10002330 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002330(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code **_Memory;
  code **ppcVar2;
  
  if (param_2 == 0) {
    if (0 < _DAT_100042b8) {
      _DAT_100042b8 = _DAT_100042b8 + -1;
      goto LAB_10002346;
    }
LAB_1000236e:
    uVar1 = 0;
  }
  else {
LAB_10002346:
    _DAT_100042bc = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_100042c4 = (code **)malloc(0x80);
      if (DAT_100042c4 == (code **)0x0) goto LAB_1000236e;
      *DAT_100042c4 = (code *)0x0;
      DAT_100042c0 = DAT_100042c4;
      _initterm(&DAT_10004000,&DAT_10004004);
      _DAT_100042b8 = _DAT_100042b8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_100042c4, ppcVar2 = DAT_100042c0, DAT_100042c4 != (code **)0x0)) {
      while (ppcVar2 = ppcVar2 + -1, _Memory <= ppcVar2) {
        if (*ppcVar2 != (code *)0x0) {
          (**ppcVar2)();
          _Memory = DAT_100042c4;
        }
      }
      free(_Memory);
      DAT_100042c4 = (code **)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* Function: entry */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = _DAT_100042b8;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002423;
    if ((DAT_100042c8 != (code *)0x0) &&
       (iVar2 = (*DAT_100042c8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10002330(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10002423:
  iVar2 = FUN_1000247e(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10002330(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10002330(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100042c8 != (code *)0x0) {
      iVar2 = (*DAT_100042c8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

/* Function: MSVCRT.DLL::_initterm */
void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10002478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}

/* Function: FUN_1000247e */
undefined4 FUN_1000247e(HMODULE param_1,int param_2)

{
  if ((param_2 == 1) && (DAT_100042c8 == 0)) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}

;