#ifndef HEATINDEX_H
#define	HEATINDEX_H

#ifdef	__cplusplus
extern "C" {
#endif
    
    /* 
     * Heat Index Look-up table
     * This data is based from National Weather Service (weather.gov) data.
     * Original Data: https://www.weather.gov/ama/heatindex
     * 
     * NOTE
     * Data was modified to fit into the array
     */

    //Rows = from 40%, every 5% to 100
    //Columns = from 80F, every 2F to 110F
    const uint8_t hIndex[13][16] =  {{80,81,83,85,88,91,94,97,101,105,109,114,119,124,130,136},         //40%
                                    {80,82,84,87,89,93,96,100,104,109,114,119,124,130,137,255},         //45%
                                    {81,83,85,88,91,95,99,103,108,113,118,124,131,137,255,255},         //50%
                                    {81,84,86,89,93,97,101,106,112,117,124,130,137,255,255,255},        //55%
                                    {82,84,88,91,95,100,105,110,116,123,129,137,255,255,255,255},       //60%
                                    {82,85,89,93,98,103,108,114,121,128,136,255,255,255,255,255},       //65%
                                    {83,86,90,95,100,105,112,119,126,134,255,255,255,255,255,255},      //70%
                                    {84,88,92,97,103,109,116,124,132,255,255,255,255,255,255,255},      //75%
                                    {84,89,94,100,106,113,121,129,255,255,255,255,255,255,255,255},     //80%
                                    {85,90,96,102,110,117,126,135,255,255,255,255,255,255,255,255},     //85%
                                    {86,91,98,105,113,122,131,255,255,255,255,255,255,255,255,255},     //90%
                                    {86,93,100,108,117,127,255,255,255,255,255,255,255,255,255,255},    //95%
                                    {87,95,103,112,121,132,255,255,255,255,255,255,255,255,255,255}};   //100%
    
#ifdef	__cplusplus
}
#endif

#endif	/* HEATINDEX_H */
