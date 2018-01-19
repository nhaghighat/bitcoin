bitcoind.cpp:
int main(int argc, char* argv[])
  return (AppInit(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE);
    gArgs.ParseParameters(argc, argv);
      mapArgs[str] = strValue;
    gArgs.ReadConfigFile(gArgs.GetArg("-conf", BITCOIN_CONF_FILENAME));
    SelectParams(ChainNameFromCommandLine());
      ChainNameFromCommandLine()
        bool fRegTest = gArgs.GetBoolArg("-regtest", false);
        bool fTestNet = gArgs.GetBoolArg("-testnet", false);
      SelectBaseParams(network);
        globalChainBaseParams = CreateBaseChainParams(chain);
      globalChainParams = CreateChainParams(network);
        return std::unique_ptr<CChainParams>(new CMainParams());
