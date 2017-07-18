<img src="https://raw.githubusercontent.com/adgellida/winsys/master/images/winsys.png" width="80"> winsys
=============================================

<p align="center">
  <a href="https://gitter.im/adgellida/winsys" target="_blank"><img src="https://badges.gitter.im/adgellida/winsys.svg" alt="chat"></a>
  <a href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=5V74HS4RV2YWG" target="_blank"><img src="https://img.shields.io/badge/Donate-PayPal-green.svg" alt="Donate with PayPal"></a>
  <a href="https://www.gnu.org/licenses/gpl-2.0.en.html" target="_blank"><img src="https://img.shields.io/badge/license-GPLv2-blue.svg" alt="GNU GPL v2"></a>
  <a href="https://github.com/adgellida/winsys/stargazers" target="_blank"><img src="https://img.shields.io/github/stars/adgellida/winsys.svg" alt="stars"></a>  
  <a href="https://github.com/adgellida/winsys/network" target="_blank"><img src="https://img.shields.io/github/forks/adgellida/winsys.svg" alt="forks"></a>
  <a href="https://github.com/adgellida/winsys/issues?q=is%3Aopen" target="_blank"><img src="https://img.shields.io/github/issues/adgellida/winsys.svg" alt="open issues"></a>
  <a href="https://github.com/adgellida/winsys/releases/latest" target="_blank"><img src="https://img.shields.io/github/downloads/adgellida/winsys/total.svg" alt="total downloads"></a>
  <a href="https://github.com/adgellida/winsys/releases/latest" target="_blank"><img src="https://img.shields.io/github/downloads/adgellida/winsys/v2017.06.16/total.svg" alt="total downloads latest release"></a> 
  <a href="https://github.com/adgellida/winsys/releases/latest" target="_blank"><img src="https://img.shields.io/badge/release-v2017.06.16-blue.svg" alt="Release"></a>
</p>

<a href="https://forthebadge.com/" target="_blank"><img src="https://raw.githubusercontent.com/adgellida/winsys/master/images/made-with-qt.png" alt="forthebadge"></a>

**For English click [here](https://github.com/adgellida/winsys/blob/master/README.md)**

Software instalador de una lista de programas útiles, capaz de hacer cambios en la configuración del sistema, ejecutar mejoras, arreglos, ejecutando acciones a golpe de click de ratón.

Específico para Windows 10 x64.

**App muy peligrosa en algunos puntos, si no sabes donde estás tocando o cómo arreglarlo, no lo hagas. Hecha con motivos de aprendizaje y testeo. No pretende ser estable de momento.**

Construido con Qt 5.8.0. Basado en [ubunsys](https://github.com/adgellida/ubunsys).

Alimentado con [windowsScripts](https://github.com/adgellida/windowsScripts).

Descarga desde fuentes oficiales - pulsa en el logo
=============================================

<p align="center">
  <a href="https://github.com/adgellida/winsys/releases" target="_blank"><img src="https://image.flaticon.com/icons/png/512/25/25231.png" width="80" alt="Github"></a>
  <a href="https://sourceforge.net/projects/winsys" target="_blank"><img src="http://www.ricksdailytips.com/wp-content/uploads/2013/07/sourceforge-logo.gif" width="80" alt="SourceForge"></a>
  <a href="https://www.opendesktop.org/s/Windows-Packages/p/1181126" target="_blank"><img src="https://lh3.googleusercontent.com/-GVRdhHKKZ0M/V0Rq3_4y83I/AAAAAAAAABI/I-ACMENI9HAGi0OnBy86NwxXO2x57BnGA/w530-h528-p/OCS%2BLOGO%2BSINGLE.png" width="80" alt="OpenDesktop.org"></a>
  <a href="https://chocolatey.org/packages/winsys" target="_blank"><img src="https://chocolatey.org/content/images/logo_small.svg" width="90" alt="Chocolatey"></a>
</p>

Instalar desde [Chocolatey](https://chocolatey.org/)
=============================================

Primero [instala](https://chocolatey.org/install) Chocolatey.

Después en un terminal haz:

`choco install -y winsys`

Capturas de pantalla
=============================================

<img src="http://i.imgur.com/TtgGYff.png" width="500">
<img src="http://i.imgur.com/qy5VRnM.png" width="500">
<img src="http://i.imgur.com/vRP5ac7.png" width="500">

Qué hace este programa
=============================================

##### Paquetes

* Instalar chocolatey, ChrisPC Win Experience Index.

* Ejecutar DriverPack Online, Windows Update Mini Tool (aplicación de terceros para las actualizaciones del sistema, recommendado), Process Explorer, Process Hacker, serviwin, Ultimate Windows Tweaker, 10AppsManager.

##### Mejoras

* Habilitar-Deshabilitar firewall, inicio rápido, restaurar sistema.

* Bloquear, notificar, apagar Smartscreen.

* Abir cmd, powershell, taskmgr, services.msc, regedit, restart, hacer un apagado completo (real).

* Saber la expiración de la licencia, buscar actualizaciones (ui nativa), ajustar el reloj del sistema a UTC (recomendado para dualboot con otro SO, like ubuntu por ejemplo) o GMT (por defecto).

##### Servicios

* Habilitar-Deshabilitar Superfetch, BITS, Windows Search, Windows Update.

* Restaurar todos los servicios a sus estados por defecto.

##### Reparar

* Comprobar la integridad del sistema.

Y más...

Tutorial
=============================================

Pasos recomendados:

1. Instalar o ejecutar las apps que quieras.

2. Ejecutar todos las mejoras que quieras, tú puedes seleccionarlas manualmente, cargar una selección preconfigurada (en un futuro podrás seleccionar la tuya), o restaurar la configuración por defecto del sistema de esos ajustes.

3. Habilitar-Deshabilitar los servicios que quieras, cargar una selección preconfigurada, restaurar los servicios que se muestran a su estado por defecto, restaurar todos los servicios existentes en el sistema a sus estados por defecto (No probado).

POR HACER
=============================================

* Actualizar programa con la flecha hacia arriba roja. Por ahora lanza a la página de versiones.

* Añadir botones: cambio de DNS, habilitar-deshabilitar Windows Store, Windows Problem Reporting, Windows Telemetry Agent.

* Añadir app USB-Fix.

* Cambiar la app de fotos de metro por el visualizador de fotos nativo de siempre.

* No comprobar drivers en Windows Update cada vez que se conecte un dispositivo.

* Guardar la configuración del usuario para usarla cuando se reabra la app.

* Crear apartado de scripts personales.

* Reagrupar ficheros para limpiar el directorio principal.

HECHO
=============================================

* Outlook exportar/importar perfil y datos.
* Traducir app al Español.

Ten cuidado
=============================================

Cuidado! Estas versiones iniciales tienen un montón de fallos y funcionalidades desactivadas.

Si quieres ayudar en este desarrollo, dímelo.

Si tú necesitas ayuda a cerca de compilar y empaquetar tengo nociones básicas, pregúntame.

No soy un programador senior, ni junior. Programo como hobby. No estoy siguiendo prácticas de código profesionales.

Sé que mi código es horrible y no está bien implementado. Con paciencia lo iré limpiando y mejorando. 

Toda buena ayuda será bienvenida.

Créditos y gracias a
=============================================

* [Bernar Novalyi](https://thenounproject.com/bernar.novalyi/) de Noun Project que creó de la app el [icono](https://thenounproject.com/term/terminal/715962/) usado aquí. Precioso!

* [tenforums](https://www.tenforums.com). Algunos scripts obtenidos de aquí.

* [chocolatey](https://chocolatey.org). Esta app es usada.

* [DriverPack](https://drp.su/en). Su ejecutable es usado.

* [thewindowsclub](http://www.thewindowsclub.com). Algunas apps son usadas.

* [Windows Update MiniTool](https://wumt.blogspot.com.es). Esta app es usada.