package com.epicgames.ue4;

import com.HorizonGames.ZombieRipOff.OBBDownloaderService;
import com.HorizonGames.ZombieRipOff.DownloaderActivity;


public class DownloadShim
{
	public static OBBDownloaderService DownloaderService;
	public static DownloaderActivity DownloadActivity;
	public static Class<DownloaderActivity> GetDownloaderType() { return DownloaderActivity.class; }
}

