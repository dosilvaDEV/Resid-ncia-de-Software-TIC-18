using Escambo.Application.Services;
using Escambo.Application.Services.Interfaces;
using Escambo.Infra.Context;
using Microsoft.EntityFrameworkCore;
using TechMed.Application.Services.Interfaces;
using TechMed.Infrastructure.Auth;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.

// Learn more about configuring Swagger/OpenAPI at https://aka.ms/aspnetcore/swashbuckle
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen();
builder.Services.AddScoped<IUsuarioService, UsuarioService>();
builder.Services.AddScoped<IAnuncioService, AnuncioService>();
builder.Services.AddScoped<IMensagemService, MensagemService>();
builder.Services.AddScoped<IAvaliacaoService, AvaliacaoService>();
builder.Services.AddScoped<IConversaService, ConversaService>();
builder.Services.AddScoped<IPrestacaoServicoService, PrestacaoServicoService>();
builder.Services.AddScoped<ILoginService, LoginService>();
builder.Services.AddScoped<IAuthService, AuthService>();
 
builder.Services.AddDbContext<EscamboContext>(options =>
{
    var connectionString = builder.Configuration.GetConnectionString("Escambo");
    var serverVersion = ServerVersion.AutoDetect(connectionString);
    options.UseMySql(connectionString, serverVersion);
});

builder.Services.AddControllers();


var app = builder.Build();

// Configure the HTTP request pipeline.
if (app.Environment.IsDevelopment())
{
    app.UseSwagger();
    app.UseSwaggerUI();
}

app.UseHttpsRedirection();

app.UseAuthorization();

app.MapControllers();

app.Run();
