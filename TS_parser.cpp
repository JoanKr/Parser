#include "tsCommon.h"
#include "tsTransportStream.h"

using namespace std;
//=============================================================================================================================================================================

int main(int argc, char *argv[ ], char *envp[ ])
{
  // TODO - open file
  FILE* en = fopen("/Users/admin/Downloads/TS_parser_S0", "rb");

  // TODO - check if file if opened
  if(en == NULL) {
      printf("Error: file not opened\n");
      return 1;
    }

  xTS_PacketHeader;

  int32_t TS_PacketId = 0;
  while(/*not eof*/ 0)
  {
    // TODO - read from file
    fread(/*TS_PacketBuffer*/ nullptr, xTS::TS_PacketLength, 1, en);


    TS_PacketHeader.Reset();
    TS_PacketHeader.Parse(/*TS_PacketBuffer*/ nullptr);

    printf("%010d ", TS_PacketId);
    TS_PacketHeader.Print();
    printf("\n");

    TS_PacketId++;
  }
  
  // TODO - close file
  fclose(en);


  return EXIT_SUCCESS;
}

//=============================================================================================================================================================================
