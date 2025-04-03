using Avalonia;
using Avalonia.Browser;
using System.Runtime.Versioning;
using System.Threading.Tasks;

namespace HeticStream.UI;

public class Program
{
    [SupportedOSPlatform("browser")]
    public static async Task Main(string[] args) 
    {
        await BuildAvaloniaApp()
            .WithInterFont()
            .StartBrowserAppAsync("out");
    }

    public static AppBuilder BuildAvaloniaApp()
        => AppBuilder.Configure<App>();
}
