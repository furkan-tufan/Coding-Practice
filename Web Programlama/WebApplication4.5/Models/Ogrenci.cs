using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication4._5.Models
{
    public class Ogrenci
    {
        [Display(Name="Öğrenci Adı:")] 
        public string OgrAd { get; set; }
        public string OgrSoyAd { get; set; }
        public int OgrNo { get; set; }
        public DateTime OgrDogum { get; set; }
        public string OgrSehir { get; set; }

    }
}
