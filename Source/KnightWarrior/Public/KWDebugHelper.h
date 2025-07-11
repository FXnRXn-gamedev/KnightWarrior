namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 Line = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(Line, 5.f, Color, Msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}

	
}
