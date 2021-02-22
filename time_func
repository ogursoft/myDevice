// Функция вывода uptime
String uptime(unsigned long currentmillis)
{
  String currUptime;
  long days = 0;
  long hours = 0;
  long mins = 0;
  long secs = 0;
  secs = currentmillis / 1000; //convect milliseconds to seconds
  mins = secs / 60;            //convert seconds to minutes
  hours = mins / 60;           //convert minutes to hours
  days = hours / 24;           //convert hours to days
  secs = secs - (mins * 60);   //subtract the coverted seconds to minutes in order to display 59 secs max
  mins = mins - (hours * 60);  //subtract the coverted minutes to hours in order to display 59 minutes max
  hours = hours - (days * 24); //subtract the coverted hours to days in order to display 23 hours max
  //Display results
  currUptime = "";
  if (days > 0) // days will displayed only if value is greater than zero
  {
    currUptime = String(days) + " дней, ";
  }
  if (hours < 10)
  {
    currUptime += "0" + String(hours) + ":";
  }
  else
    currUptime += String(hours) + ":";

  if (mins < 10)
  {
    currUptime += "0" + String(mins) + ":";
  }
  else
    currUptime += String(mins) + ":";

  if (secs < 10)
  {
    currUptime += "0" + String(secs);
  }
  else
    currUptime += String(secs);

  return currUptime;
}

String fDateTime(long cDay, long cMonth, long cYear, long cHour, long cMin, long cSec)
{
  String cDateTime;

  if (cDay < 10)
  {
    cDateTime = "0" + String(cDay) + ".";
  }
  else
    cDateTime = String(cDay) + ".";

  if (cMonth < 10)
  {
    cDateTime += "0" + String(cMonth) + ".";
  }
  else
    cDateTime += String(cMonth) + ".";

  cDateTime += String(cYear) + " ";

  if (cHour < 10)
  {
    cDateTime += "0" + String(cHour) + ":";
  }
  else
    cDateTime += String(cHour) + ":";

  if (cMin < 10)
  {
    cDateTime += "0" + String(cMin) + ":";
  }
  else
    cDateTime += String(cMin) + ":";

  if (cSec < 10)
  {
    cDateTime += "0" + String(cSec);
  }
  else
    cDateTime += String(cSec);
  return cDateTime;
}
