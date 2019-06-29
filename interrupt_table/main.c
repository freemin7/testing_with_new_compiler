#include "board.h"

static void (*interrupt_vec[256])(void) = {int0, int1, int2, int3, int4, int5, int6, int7, int8, int9, int10, int11, int12, int13, int14, int15, int16, int17, int18, int19, int20, int21, int22, int23, int24, int25, int26, int27, int28, int29, int30, int31, int32, int33, int34, int35, int36, int37, int38, int39, int40, int41, int42, int43, int44, int45, int46, int47, int48, int49, int50, int51, int52, int53, int54, int55, int56, int57, int58, int59, int60, int61, int62, int63, int64, int65, int66, int67, int68, int69, int70, int71, int72, int73, int74, int75, int76, int77, int78, int79, int80, int81, int82, int83, int84, int85, int86, int87, int88, int89, int90, int91, int92, int93, int94, int95, int96, int97, int98, int99, int100, int101, int102, int103, int104, int105, int106, int107, int108, int109, int110, int111, int112, int113, int114, int115, int116, int117, int118, int119, int120, int121, int122, int123, int124, int125, int126, int127, int128, int129, int130, int131, int132, int133, int134, int135, int136, int137, int138, int139, int140, int141, int142, int143, int144, int145, int146, int147, int148, int149, int150, int151, int152, int153, int154, int155, int156, int157, int158, int159, int160, int161, int162, int163, int164, int165, int166, int167, int168, int169, int170, int171, int172, int173, int174, int175, int176, int177, int178, int179, int180, int181, int182, int183, int184, int185, int186, int187, int188, int189, int190, int191, int192, int193, int194, int195, int196, int197, int198, int199, int200, int201, int202, int203, int204, int205, int206, int207, int208, int209, int210, int211, int212, int213, int214, int215, int216, int217, int218, int219, int220, int221, int222, int223, int224, int225, int226, int227, int228, int229, int230, int231, int232, int233, int234, int235, int236, int237, int238, int239, int240, int241, int242, int243, int244, int245, int246, int247, int248, int249, int250, int251, int252, int253, int254, int255};

void start(void) {
(DEVICE_GPIO)->value = 2;
uint32_t INT_Table = (uint32_t)&interrupt_vec[0];
  (DEVICE_GPIO)->value = 0xFB;
asm("LDC %0, VBR;"
    : 
    : "r" (INT_Table)
    );

}
