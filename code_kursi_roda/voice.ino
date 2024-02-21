void voice()
{

  int ret;
  ret = myVR.recognize(buf, 50);
  if (ret > 0) {
    switch (buf[1]) {
      case maju:
        /** turn on LED */
        forward();
        delay (2000);
        bacaSensor = true;
        break;
      case mundur:
        backward();
        delay (2000);
        bacaSensor = true;
        break;
      case belok_kiri:
        left();
        bacaSensor = true;
        break;
      case belok_kanan:
        right();
        bacaSensor = true;
        break;
      case stopp:
        stop();
        bacaSensor = true;
        break;


    }
    /** voice recognized */
    printVR(buf);
  }
}
