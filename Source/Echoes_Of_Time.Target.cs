// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Echoes_Of_TimeTarget : TargetRules
{
	public Echoes_Of_TimeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Echoes_Of_Time" } );
	}
}
