using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication4._5.Models;

namespace WebApplication4._5.Controllers
{
    public class OgrenciController : Controller
    {
        public IActionResult Index()
        {
            ViewBag.sehirler = new List<SelectListItem>() { 
                new SelectListItem { Value = "54", Text = "Sakarya" };
                new SelectListItem { Value = "34", Text = "İstanbul" };
                new SelectListItem { Value = "35", Text = "İzmir" };
                return View();
            }
        }
        public IActionResult Kaydet(Ogrenci Ogr)
        {
            return View();
        }

    }
   
}