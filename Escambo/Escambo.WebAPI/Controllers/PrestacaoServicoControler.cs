using Escambo.Application.InputModels;
using Escambo.Application.Services.Interfaces;
using Escambo.Application.ViewModels;
using Escambo.WebAPI.Controllers.Interface;
using Microsoft.AspNetCore.Mvc;


namespace Escambo.WebAPI.Controllers;

[ApiController]
[Route("Escambo/")]


public class PrestacaoServicoControler : ControllerBase, IPrestacaoServicoControler
{
    protected readonly IPrestacaoServicoService _prestacaoServicoService;

    public List<PrestacaoServicoViewModel> _prestacaoServicos => _prestacaoServicoService.GetAll().ToList();
    public PrestacaoServicoControler(IPrestacaoServicoService prestacaoServicoService) => _prestacaoServicoService = prestacaoServicoService;
   
    [HttpGet("PrestacaoServico/all")]
    public IActionResult GetAll()
    {
       if(_prestacaoServicos == null) return NotFound();
       return Ok(_prestacaoServicos);
    }

     [HttpGet("PrestacaoServico/{id}")]
    public IActionResult GetById(int id)
    {
        var _prestacaoServicos = _prestacaoServicoService.GetById(id);
        if(_prestacaoServicos is not null)  return Ok(_prestacaoServicos);
        return NotFound();
    }
    [HttpPost("PrestacaoServico")]
    public IActionResult Create(PrestacaoServicoInputModel input)
    {
       var id = _prestacaoServicoService.Create(input);
       if(id == 0) return BadRequest();
       return Ok(id);
    }

    [HttpDelete("PrestacaoServico/{id}")]
    public IActionResult Delete(int id)
    {
        _prestacaoServicoService.Delete(id);
        return Ok();
    }

    [HttpPut("PrestacaoServico/{id}")]
    public IActionResult Update(int id, PrestacaoServicoInputModel input)
    {
       _prestacaoServicoService.Update(id, input);
       return Ok();
    }
    [HttpGet("PrestacaoServico/usuario/{id}/all")]
    public IActionResult PrestacaoServicosGetByUsuario(int UsuarioId){
        var servicos = _prestacaoServicos.Where(u => u.Usuarios.Any(a => a.UsuarioId == UsuarioId)).ToList();
        if(servicos is not null) return Ok(servicos);
        return NotFound();
    }
    
}