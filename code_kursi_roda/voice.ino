void voice()
{

  int ret;
  ret = myVR.recognize(buf, 50);
  if (ret > 0) {
    switch (buf[1]) {
      case maju:
        bacaSensor = true;
        forward();
        break;
      case mundur:
        bacaSensor = true;
        backward();
        break;
      case belok_kiri:
        left();
//        bacaSensor = true;
        break;
      case belok_kanan:
        right();
//        bacaSensor = true;
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
