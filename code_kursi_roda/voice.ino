void voice()
{
 
 int ret;
  ret = myVR.recognize(buf, 50);
  if (ret > 0) {
    switch (buf[1]) {
      case maju:
        /** turn on LED */
        forward();
        break;
      case mundur:
        backward();
        break;
      case belok_kiri:
        left();
        break;
      case belok_kanan:
        right();
        break;
      case stopp:
        stop();
        break;


    }
    /** voice recognized */
    printVR(buf);
  }
}
